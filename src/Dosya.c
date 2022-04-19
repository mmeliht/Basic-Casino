#include "Dosya.h"
#include "Kisiler.h"

fl FileReader()
{
    fl f;
    f.file = fopen("doc/Kisiler.txt", "r");

    while (fgets(f.line, f.maxLen, f.file))
    {
        printf("satir: %s\n", f.line);

        f.part = strtok(f.line, "#");

        int partIndex = 0;
        while (f.part != NULL)
        {
            partIndex++;
            /*if (partIndex == 1)
                f.spoofName[partIndex] = atoi(f.part);
                */
            if (partIndex == 2)
                f.spoofMoney = atoi(f.part);
            else if (partIndex == 3)
                f.spoofRate = atoi(f.part);
            else if (partIndex == 4)
                f.spoofNumber = atoi(f.part);
            else
                printf("%s", "Hata");

            f.part = strtok(NULL, " ");
            Ks k = AddPerson(f.spoofMoney, f.spoofRate, f.spoofNumber);
        }
    }

    fclose(f.file);
    return f;
}