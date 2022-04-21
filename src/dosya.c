#include "../include/Dosya.h"
#include "../include/jval.h"
#include "../include/dllist.h"
#include "../include/kisiler.h"
dosya DosyaOku()
{
    dosya f;
    Kisi k;
    f.satir[255];
    f.dosya = fopen("./doc/Kisiler.txt", "r");
    while (fgets(f.satir, 255, f.dosya))
    {
        f.parca = strtok(f.satir, "#");
        while (f.parca != NULL)
        {
            if (f.parcaIndex % 4 == 0)
                IsimGetir(f.parca);
            if (f.parcaIndex % 4 == 1)
                ParaGetir(f.parca);
            if (f.parcaIndex % 4 == 2)
                OranGetir(f.parca);
            if (f.parcaIndex % 4 == 3)
                SayiGetir(f.parca);
            f.parca = strtok(NULL, "#");
            f.parcaIndex++;
        }
    }

    return f;
}