#ifndef DOSYA_H
#define DOSYA_H 1
#include "../include/Oyun.h"
#include "../include/Kisi.h"
typedef struct Dosya{
	char DosyaAdi[100];
	char islem[3];
}Dosya; 

Oyun SayilariOku(Dosya d);
Kisi* KisileriOku(Dosya d);
int KisiSayisi(Dosya d);

#endif
