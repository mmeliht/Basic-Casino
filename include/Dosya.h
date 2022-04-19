#ifndef DOSYA_H
#define DOSYA_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXLEN 1001

typedef struct Dosya
{

    FILE *file;
    int maxLen;
    char line[MAXLEN];
    char *part;

    char *spoofName[MAXLEN];
    float spoofMoney;
    float spoofRate;
    int spoofNumber;

} fl;

extern fl FileReader();

#endif