#include "../include/kisiler.h"
#include "../include/dllist.h"
#include "../include/dosya.h" 
Kisi k;
Kisi IsimGetir(char* isim)
{
   
    k.isim=new_dllist();
    dll_append(k.isim, new_jval_s(strdup(isim)));
    k.tmpIsim = k.isim->flink;
    while (k.tmpIsim != k.isim)
    {
        printf("%s\n", k.tmpIsim->val.s);
        k.tmpIsim = k.tmpIsim->flink;
    }

}
Kisi SayiGetir(char* sayi)
{
    k.sayi=new_dllist();
    dll_append(k.sayi, new_jval_i(atoi(sayi)));
    k.tmpSayi = k.sayi->flink;
    while (k.tmpSayi != k.sayi)
    {
        printf("%d\n", k.tmpSayi->val.i);
        k.tmpSayi = k.tmpSayi->flink;
    }
   
}
Kisi OranGetir(char* oran)
{
    k.oran=new_dllist();
    dll_append(k.oran, new_jval_f(atof(oran)));
    k.tmpOran = k.oran->flink;
    while (k.tmpOran != k.oran)
    {
        printf("%.2f\n", k.tmpOran->val.f);
        k.tmpOran = k.tmpOran->flink;
    }
}
Kisi ParaGetir(char* para)
{
    k.para=new_dllist();
    dll_append(k.para, new_jval_f(atof(para)));
    k.tmpPara = k.para->flink;
    while (k.tmpPara != k.para)
    {
        printf("%.2f\n", k.tmpPara->val.f);
        k.tmpPara = k.tmpPara->flink;
    }
}