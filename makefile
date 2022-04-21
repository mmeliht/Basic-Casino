hepsi: derle calistir

derle:
	gcc -o ./lib/jval.o -c ./src/jval.c
	gcc -o ./lib/dllist.o -c ./src/dllist.c
	gcc -o ./lib/Kisiler.o -c ./src/kisiler.c
	gcc -o ./lib/Dosya.o -c ./src/dosya.c
	gcc -o ./bin/test ./lib/jval.o ./lib/dllist.o ./lib/Kisiler.o ./lib/Dosya.o ./src/Test.c
calistir:
	bin/test