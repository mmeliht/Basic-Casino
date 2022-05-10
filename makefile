all: debug run

debug:
	gcc -o ./lib/Kisi.o -c ./src/Kisi.c
	gcc -o ./lib/Oyun.o -c ./src/Oyun.c
	gcc -o ./lib/Dosya.o -c ./src/Dosya.c
	gcc -o ./bin/test ./lib/Kisi.o ./lib/Oyun.o ./lib/Dosya.o ./src/test.c
run:
	bin/test