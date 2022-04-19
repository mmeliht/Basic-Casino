#include "Dosya.h"
#include "Kisiler.h"

fl FileReader()
{
    fl f;
    Ks k;
    char satir[255];
    FILE *dosya = fopen("./doc/Kisiler.txt", "r");
    while (fgets(satir, 255, dosya))
    {
        printf("satir: %s\n", satir);
        char *parca;

        parca = strtok(satir, "#");

        int parcaIndex = 0;

        while (parca != NULL)
        {
            parcaIndex++;
            if(parcaIndex%4==1)
            {
                
                printf("isim: %s\n", parca);
            }
            else if(parcaIndex%4==2)
            {
                k.money=atof(parca);
                printf("para: %.2f\n", k.money);
            }
            else if(parcaIndex%4==3)
            {
                printf("oran: %s\n", parca);
            }
            else printf("oynadigi sayi:%s\n",parca);
            parca = strtok(NULL, "#");
            
        }
    }
    return f;
}