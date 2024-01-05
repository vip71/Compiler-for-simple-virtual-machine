bison -d parser.y
flex lex.l
gcc -o my_parser lex.yy.c parser.tab.c map.c heap.c map_heap.c strings.c numbers.c handlers.c
./my_parser < dupa.txt
cp example.txt maszyna_wirtualna/
cd maszyna_wirtualna
./maszyna-wirtualna example.txt
cd ..

