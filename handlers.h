//
// Created by Asia i Tomek on 30.12.2023.
//

#ifndef KOMPILATOR1_HANDLERS_H
#define KOMPILATOR1_HANDLERS_H
#include "numbers.h"
#include "map.h"
#include "map_heap.h"
#include "strings.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void append_to_result_code(const char *s,int *result_code_next_line,FILE* file);
void handle_heap_init(int variables,int *result_code_next_line,FILE* file);
void handle_procedure_call(const char *caller,const char *procedure,struct Map *map,struct MapHeap *heap,struct Map * given_params,int *result_code_next_line,FILE* file);
void handle_procedure_end(int *result_code_next_line,FILE* file);
void handle_procedure_head(struct Map *map,const char *s,int line);

void handle_procedure_declaration_start(struct MapHeap* heap, int* procedure_variables);
void handle_parameter_declaration(struct MapHeap* heap, const char* variable_name, int* procedure_variables,int vars_declared);
void handle_variable_declaration(struct MapHeap* heap, const char* variable_name, int* procedure_variables,int vars_declared);
void handle_declarations(struct MapHeap* heap, int* procedure_variables, int* procedures_declared);

void get_pointer(const char * result_register,const char * var_name, int table_offset,struct Map * procedure_variables,int *line, FILE * file);
void get_pointer_value(const char * result_register,int *line, FILE * file);
void get_pointer_table_variant(const char * table_name,const char * var_name, struct Map * procedure_variables,int *line, FILE * file);

void set_register(const char* machine_register, int constant,int *result_code_next_line, FILE * file);
void add_to_register(const char* machine_register, int constant,int *result_code_next_line, FILE * file);
void copy_register(const char * source_reg, const char * destination_reg,int *line, FILE * file);

void count_expression(char expression_char,int *line, FILE * file);

int get_parameter_location(struct Map* map,const char* parameter_name);
int count_in_outs(struct Map* map);
int is_in_out(struct Map* map, const char * key);

#endif //KOMPILATOR1_HANDLERS_H
