hepsi: derle calistir

derle:
	gcc -o ./lib/Kisiler.o  -c ./src/Kisiler.c
	gcc -o ./lib/Dosya.o  -c ./src/Dosya.c
	gcc -o ./bin/test ./lib/Kisiler.o ./lib/Dosya.o ./src/Test.c
calistir:
	bin/test