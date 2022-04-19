#ifndef KISILER_H
#define KISILER_H

#include <stdio.h>
#include <stdlib.h>

#define MAXLEN 1001
typedef struct Kisiler
{
   char name[MAXLEN];
   float money;
   float rate;
   int number;
}Ks;
extern Ks AddPerson(float,float,int);

#endif