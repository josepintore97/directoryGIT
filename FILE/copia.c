#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DIM 30

int main()
{
    FILE *fp;
    char parola[DIM];

    fp = fopen("prova.txt", "wt");

    if (fp == NULL)
    {
        printf("Impossibile aprire il file.\n");
        exit(1);
    }

    do
    {
        scanf("%s", parola);
        if (strcmp(parola, "FINE") != 0)
        {
            fprintf(fp, "%s ", parola);
        }

    } while (strcmp(parola, "FINE") != 0);

    fprintf(fp, "\n");

    if (fclose(fp) != 0)
    {
        printf("Errore nella chiusura del file.\n");
        exit(2);
    }

    return 0;
}