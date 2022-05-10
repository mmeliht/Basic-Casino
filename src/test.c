#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../include/Oyun.h"
#include "../include/Dosya.h"
#include "../include/Kisi.h"
int main(int argc, char *argv[]) { 
	int i;
	Dosya sayiDosya;
	strcpy(sayiDosya.DosyaAdi,"./doc/Sayilar.txt");
	strcpy(sayiDosya.islem,"r");
	
	Dosya kisiDosya;
	strcpy(kisiDosya.DosyaAdi,"./doc/Kisiler.txt");
	strcpy(kisiDosya.islem,"r");
	
	Oyun o = SayilariOku(sayiDosya);
	int kisiSayisi = KisiSayisi(kisiDosya); 
	Kisi* kisiler = KisileriOku(kisiDosya);
	
	system("cls");
	o = OyunuOynat(o,kisiler,kisiSayisi);
	getch();
	  
	return 0; 
}

