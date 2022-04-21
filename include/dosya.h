#ifndef DOSYA_H
#define DOSYA_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXLEN 1001

typedef struct Dosya
{
    FILE *dosya;
    char satir[255];
    char *parca;
    int parcaIndex;

} dosya;

dosya DosyaOku();

#endif