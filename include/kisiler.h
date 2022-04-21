#ifndef KISILER_H
#define KISILER_H

#include <stdio.h>
#include <stdlib.h>
#include "../include/dllist.h"
#include "../include/jval.h"

#define MAXLEN 1001
typedef struct Kisiler
{
   Dllist isim, tmpIsim;
   Dllist para, tmpPara;
   Dllist oran, tmpOran;
   Dllist sayi, tmpSayi;

} Kisi;

Kisi IsimGetir();
Kisi SayiGetir();
Kisi ParaGetir();
Kisi OranGetir();


#endif