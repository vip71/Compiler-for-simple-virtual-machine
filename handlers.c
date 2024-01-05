//
// Created by Asia i Tomek on 30.12.2023.
//
#include "handlers.h"

void handle_heap_init(int variables,int *line, FILE * file){
    append_to_result_code("RST h \n",line,file);
    append_to_result_code("RST g \n",line,file);
    append_to_result_code("INC g #HEAP INIT\n",line,file);
    add_to_register("g",variables,line,file);
}

void handle_procedure_head(struct Map *map,const char *s,int line){
    //printf("PROC HEAD %s at line %d\n",s,line);
    addToMap(map, s, line);
}

void handle_procedure_call(const char *caller,const char *procedure,struct Map *result_code_func_map,struct MapHeap *heap,struct Map * given_params,int *line, FILE * file){
    int procedure_start = getFromMap(result_code_func_map,procedure);
    printf("PROC CALL %s into line %d from %s\n",procedure,procedure_start,caller);
    struct Map * caller_params = getHeapElementByNumber(heap,getKeyIndex(result_code_func_map,caller));
    int expected_parameters = count_in_outs(getHeapElementByNumber(heap,getKeyIndex(result_code_func_map,procedure)));
    //printf("expected parameters %d\n",expected_parameters);
    //printf("given_params: \n");
    //printMap(given_params);
    if(expected_parameters != given_params->size || hasValue(given_params,-1) == 1){
        printf("Invalid call :c\n");
        return;
    }
    //printf("\n");


    append_to_result_code("GET g # debug\n",line,file);
    append_to_result_code("WRITE # debug\n",line,file);
    append_to_result_code("GET h\n",line,file);
    append_to_result_code("PUT b #zapisujemy stary koniec stosu w b\n",line,file);
    append_to_result_code("GET g\n",line,file);
    append_to_result_code("PUT h\n",line,file);
    append_to_result_code("INC h #zapisujemy nowy koniec stosu w miejscu poprzedni return line +1\n",line,file);
    append_to_result_code("GET b\n",line,file);
    append_to_result_code("STORE h #zapisany stary koniec stosu w miejscu pamieci nowego\n",line,file);
    append_to_result_code("PUT c # !!!!! uwaga to stosujemy później!!!!\n",line,file);
    append_to_result_code("GET h\n",line,file);
    append_to_result_code("PUT g\n",line,file);
    append_to_result_code("INC g #tylko paceholder na przesuniecie i nowe zmienne\n",line,file);


    int procedure_number = getKeyIndex(result_code_func_map,procedure);
    struct Map * procedure_variables_map = getHeapElementByNumber(heap,procedure_number);
    int procedure_all_variables = getFromMap(procedure_variables_map,"!all_variables!");

    //manage parameters
    for(int i=0;i<given_params->size;i++) {
        set_register("b", given_params->entries[i].value+1, line, file);
        append_to_result_code("GET c\n",line,file);
        append_to_result_code("ADD b\n",line,file);
        //append_to_result_code("WRITE \n",line,file);
        if(is_in_out(caller_params,given_params->entries[i].key)) {
            //printMap(caller_params);
            //printf("DUUUUUUUUUUUPAAAAAAAAAAAAAAAAAAA %s \n",given_params->entries[i].key);
            append_to_result_code("LOAD a\n",line,file);
            //append_to_result_code("WRITE \n",line,file);
        }
        //append_to_result_code("LOAD a\n",line,file);
        //append_to_result_code("WRITE \n",line,file);

        append_to_result_code("STORE g\n",line,file);
        append_to_result_code("INC g\n",line,file);
    }
    //alloc memory for not * variables
    //parameters always have length 1
    add_to_register("g",procedure_all_variables-expected_parameters,line,file);

    append_to_result_code("RST b\n",line,file);
    append_to_result_code("INC b\n",line,file);
    append_to_result_code("SHL b\n",line,file);
    append_to_result_code("SHL b #ustawiono b=4\n",line,file);
    append_to_result_code("STRK a\n",line,file);
    append_to_result_code("ADD b\n",line,file);
    append_to_result_code("STORE g\n",line,file);
    append_to_result_code(concat(append_int_to_string("JUMP ",procedure_start),"\n"),line,file);
}

void handle_procedure_end(int *result_code_next_line, FILE * file){
    append_to_result_code("LOAD g\n",result_code_next_line,file);
    append_to_result_code("PUT b # loads return function address into b\n",result_code_next_line,file);
    append_to_result_code("GET h\n",result_code_next_line,file);
    append_to_result_code("PUT g\n",result_code_next_line,file);
    append_to_result_code("DEC g # sets previous function return address \n",result_code_next_line,file);
    append_to_result_code("LOAD h\n",result_code_next_line,file);
    append_to_result_code("PUT h # sets previous heap return address\n",result_code_next_line,file);
    append_to_result_code("JUMPR b # jumps back to call+1\n",result_code_next_line,file);
}

void handle_variable_declaration(struct MapHeap* heap, const char* variable_name, int* procedure_variables,int vars_declared){
    addToTopMap(heap,variable_name,*procedure_variables);
    *procedure_variables+=vars_declared;
}

void handle_declarations(struct MapHeap* heap, int* procedure_variables, int* procedures_declared){
    *procedures_declared += 1;
}

void handle_procedure_declaration_start(struct MapHeap* heap, int* procedure_variables){
    //TODO: ADD if(heap.empty) skip;
    addToTopMap(heap,"!all_variables!",*procedure_variables);
    *procedure_variables = 0;
    addToHeap(heap, createMap());
}

void get_pointer(const char * result_register,const char * var_name, int table_offset,struct Map * procedure_variables,int *line, FILE * file){
    int place_in_heap = get_parameter_location(procedure_variables,var_name);
    int in_out = is_in_out(procedure_variables,var_name);

    printf("%s place in h: %d, is in out %d\n",var_name,place_in_heap,in_out);
    if(place_in_heap == -1){
        //TODO make it better
        printf("ERROR UNDECLARED VARIABLE!!!!!!!!!!!!!\n");
        return;
    }

    set_register("a",place_in_heap+1,line,file);
    append_to_result_code("ADD h\n",line,file);
    if(in_out == 1){
        append_to_result_code("LOAD a\n",line,file);
    }
    //append_to_result_code("WRITE #debug\n",line,file);
    append_to_result_code(concat(concat("PUT ",result_register),"\n"),line,file);
    if(table_offset>0){
        add_to_register(result_register,table_offset,line,file);
    }
}

void get_pointer_value(const char * result_register,int *line, FILE * file){
    append_to_result_code(concat(concat("LOAD ",result_register),"\n"),line,file);
    append_to_result_code(concat(concat("PUT ",result_register),"\n"),line,file);
}

void get_pointer_table_variant(const char * table_name,const char * var_name, struct Map * procedure_variables,int *line, FILE * file){
    printf("finding in memory %s and shifting %s\n",table_name,var_name);
    get_pointer("e",var_name,0,procedure_variables,line,file);
    get_pointer_value("e",line,file);
    get_pointer("b",table_name,0,procedure_variables,line,file);
    printf("liniia przed dodaniem %d\n",*line);
    append_to_result_code("GET b\n",line,file);
    append_to_result_code("ADD e\n",line,file);
    append_to_result_code("PUT b\n",line,file);
}

void copy_register(const char * source_reg, const char * destination_reg,int *line, FILE * file){
    append_to_result_code(concat("GET ",concat(source_reg,"\n")),line,file);
    append_to_result_code(concat("PUT ",concat(destination_reg,"\n")),line,file);
}

void count_expression(char expression_char,int *line, FILE * file){
    if(expression_char == '+'){
        append_to_result_code("GET b\n",line,file);
        append_to_result_code("ADD c\n",line,file);
        append_to_result_code("STORE d\n",line,file);
    }
    else if(expression_char == '-'){
        append_to_result_code("GET c\n",line,file);
        append_to_result_code("SUB b\n",line,file);
        append_to_result_code("STORE d\n",line,file);
    }
    else if(expression_char == '_'){
        append_to_result_code("GET b\n",line,file);
        append_to_result_code("STORE d\n",line,file);
    }
    else if(expression_char == '<'){
        append_to_result_code("GET b\n",line,file);
        append_to_result_code("SUB c\n",line,file);
    }
    else if(expression_char == '{'){
        append_to_result_code("GET b\n",line,file);
        append_to_result_code("INC a\n",line,file);
        append_to_result_code("SUB c\n",line,file);
    }
    else if(expression_char == '>'){
        append_to_result_code("GET c\n",line,file);
        append_to_result_code("SUB b\n",line,file);
    }
    else if(expression_char == '}'){
        append_to_result_code("GET c\n",line,file);
        append_to_result_code("INC a\n",line,file);
        append_to_result_code("SUB b\n",line,file);
    }
    else if(expression_char == '='){

    }
    else if(expression_char == '!'){

    }
}

void append_to_result_code(const char *s, int *result_code_next_line, FILE * file){
    fprintf(file, "%s", s);
    (*result_code_next_line)++;
}

void add_to_register(const char* machine_register, int constant,int *line, FILE * file){
    // mozna zobaczyc kiedy robic fora z ++
    // obslozyc blad gdy rejest to a
    if(constant>10){
        set_register("a",constant,line,file);
        append_to_result_code(concat("ADD ",concat(machine_register,"\n")),line,file);
        append_to_result_code(concat("PUT ",concat(machine_register,"\n")),line,file);
    }
    else{
        for(int i=0;i<constant;i++){
            append_to_result_code(concat("INC ",concat(machine_register,"\n")),line,file);
        }
    }
}

void set_register(const char* machine_register, int constant,int *result_code_next_line, FILE * file)//emaby make long
{
    int amount_of_digits = findLeftmostSetBit(constant);
    append_to_result_code(concat("RST ", concat(machine_register, "\n")), result_code_next_line, file);
    for(int i=0;i<amount_of_digits;i++){
        if(getNthBinaryDigit(constant, amount_of_digits-i)){
            append_to_result_code(concat("INC ", concat(machine_register, "\n")), result_code_next_line, file);
        }
        append_to_result_code(concat("SHL ", concat(machine_register, "\n")), result_code_next_line, file);
    }
    if(getNthBinaryDigit(constant, 0)){
        append_to_result_code(concat("INC ", concat(machine_register, "\n")), result_code_next_line, file);
    }
}

int get_parameter_location(struct Map* map,const char* parameter_name){
    int parameter_location = getFromMap(map, concat("*",parameter_name));
    if(parameter_location == -1){
        parameter_location = getFromMap(map, parameter_name);
    }
    return parameter_location;
}

int count_in_outs(struct Map* map){
    int in_outs=0;
    for (int i = 0; i < map->size; ++i) {
        if (map->entries[i].key[0] == '*') {
            in_outs++;
        }
        else {
            return in_outs;
        }
    }
    return in_outs;
}

int is_in_out(struct Map* map, const char * key){
    return hasKey(map, concat("*",key));
}
