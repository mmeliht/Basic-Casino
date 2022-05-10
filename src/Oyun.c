#include "../include/Oyun.h"
#include <stdio.h>
#include <windows.h>

void gotoxy(int x, int y)
{
	COORD c;
	c.X = x;
	c.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

int EnZenginiYazdir(Kisi *kisiler, int kisiSayisi)
{
	int j = 0, i = 0;
	Kisi enzengin = kisiler[0];
	for (i = 0; i < kisiSayisi; i++)
	{
		for (j = i + 1; j < kisiSayisi; j++)
		{
			if (kisiler[i].Para > enzengin.Para)
			{
				enzengin = kisiler[i];
			}
		}
	}
	gotoxy(30, 19);
	printf("##\t\t%-30s\t\t##", enzengin.AdSoyad);
	gotoxy(30, 20);
	printf("##\t\tBAKIYESI: %-20.f\t\t##", enzengin.Para);
	if (enzengin.Para < 1000)
	{
		return -1;
	}
	return 1;
}

Oyun OyunuOynat(Oyun o, Kisi *kisiler, int kisiSayisi)
{
	int i, j;
	char enzengin[100];
	int devam = 1;
	float yatirilanMiktar, kazanilanMiktar;
	for (i = 0; i <= o.sayiAdeti; i++)
	{
		gotoxy(30, 10);
		printf("############################################################\n");
		gotoxy(30, 11);
		printf("##\t\t\tSANSLI SAYI: %-2d\t\t\t##\n", o.sayilar[i-1]);
		gotoxy(30, 12);
		printf("############################################################\n");
		gotoxy(30, 13);
		printf("############################################################\n");
		gotoxy(30, 14);
		printf("##\t\t\tTUR: %-6d\t\t\t##\n", i);
		gotoxy(30, 15);
		printf("##\t\tMASA BAKIYE: %-20.2f TL\t##\n", o.MasaParasi);
		gotoxy(30, 16);
		printf("##\t\t\t\t\t\t\t##\n");
		gotoxy(30, 17);
		printf("##--------------------------------------------------------##\n");
		if (devam == 1)
		{
			gotoxy(30, 18);
			printf("##\t\tEN ZENGIN KISI\t\t\t\t##\n");
			for (j = 0; j < kisiSayisi; j++)
			{
				if (kisiler[j].Para >= 1000)
				{
					yatirilanMiktar = kisiler[j].Para * kisiler[j].TurPara;
					o.MasaParasi += yatirilanMiktar;
					kisiler[j].Para -= yatirilanMiktar;
					if (kisiler[j].Sayi == o.sayilar[i])
					{
						kazanilanMiktar = yatirilanMiktar * 10;
						kisiler[j].Para += kazanilanMiktar;
						o.MasaParasi -= kazanilanMiktar;
					}
				}
			}
			devam = EnZenginiYazdir(kisiler, kisiSayisi);
		}
		else
		{
			system("cls");
			gotoxy(30, 10);
			printf("############################################################\n");
			gotoxy(30, 11);
			printf("##\t\t\tSANSLI SAYI: %-2d\t\t\t##\n", o.sayilar[i-1]);
			gotoxy(30, 12);
			printf("############################################################\n");
			gotoxy(30, 13);
			printf("############################################################\n");
			gotoxy(30, 14);
			printf("##\t\t\tTUR: %-6d\t\t\t##\n", i);
			gotoxy(30, 15);
			printf("##\t\tMASA BAKIYE: %-20.2f TL\t##\n", o.MasaParasi);
			gotoxy(30, 16);
			printf("##\t\t\t\t\t\t\t##\n");
			gotoxy(30, 17);
			printf("##--------------------------------------------------------##\n");
			gotoxy(30, 18);
			printf("##\t\tOYUN BITTI\t\t\t\t##\n");
			gotoxy(30, 19);
			printf("##\t\t\t\t\t\t\t##\n");
			gotoxy(30, 20);
			printf("##\t\t\t\t\t\t\t##\n");
			gotoxy(30, 21);
			printf("##\t\t\t\t\t\t\t##\n");
			gotoxy(30, 22);
			printf("############################################################\n");
			break;
		}
		gotoxy(30, 21);
		printf("##\t\t\t\t\t\t\t##\n");
		gotoxy(30, 22);
		printf("############################################################\n");
		usleep(100000);
	}
	return o;
}
