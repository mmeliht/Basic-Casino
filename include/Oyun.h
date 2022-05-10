#ifndef OYUN_H
#define OYUN_H 1
#include "../include/Kisi.h"
typedef struct Oyun{
	float MasaParasi;
	int sayilar[1000];
	int sayiAdeti;
}Oyun;

Oyun OyunuOynat(Oyun o,Kisi *kisiler,int kisiSayisi);
void gotoxy(int x,int y);
int EnZenginiYazdir(Kisi *kisiler,int kisiSayisi);
#endif
