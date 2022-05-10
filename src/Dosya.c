#include "../include/Dosya.h" 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Oyun SayilariOku(Dosya d){
	Oyun o;
	o.MasaParasi=0;
	FILE* f = fopen(d.DosyaAdi,d.islem);
	int sayac = 0,t;
	while(!feof(f)){
		fscanf(f,"%d\n",&t);
		sayac++;
	}
	rewind(f);
	int* dizi = (int*) malloc(sizeof(int)*(sayac+1));
	int i=0;
	while(!feof(f)){
		fscanf(f,"%d\n",&o.sayilar[i]);
		i++;
	} 
	o.sayiAdeti = i;
	fclose(f);
	return o;
}

Kisi* KisileriOku(Dosya d){
	int kisiSayisi = KisiSayisi(d);
	Kisi *kisiler = (Kisi*)malloc(sizeof(Kisi)*kisiSayisi);
	int i=0;
	FILE* f = fopen(d.DosyaAdi,d.islem);
	char buf[1000],temp[1000];
	char* deger;
	const char ayrac[2] = "#";
	while(!feof(f)){
		fscanf(f,"%[^\n]\n",buf);
		strcpy(temp,buf);
		deger = strtok(temp,ayrac);
		strcpy(kisiler[i].AdSoyad,deger);
		deger = strtok(NULL,ayrac);
		kisiler[i].Para = atof(deger);
		deger = strtok(NULL,ayrac);
		kisiler[i].TurPara = atof(deger);
		deger = strtok(NULL,ayrac);
		kisiler[i].Sayi = atoi(deger);
		i++;
	}
	fclose(f);
	return kisiler;
}

int KisiSayisi(Dosya d){
	FILE* f = fopen(d.DosyaAdi,d.islem);
	int sayac = 0;
	char buf;
	while(!feof(f)){
		fscanf(f,"%c",&buf);
		if(buf == '\n'){
			sayac++;
		}
	}
	fclose(f);
	return sayac-1;
}
