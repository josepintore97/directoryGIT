#include <stdio.h>
#include <stdlib.h>
#include "ricopia.h"
#define DIM 11

int main(int argc, char *argv[])
{
    FILE *fp;
    int i;

    if ((fp = fopen(argv[1], "wt")) == NULL)
    {
        printf("Errore nell apertura del file.\n");
        exit(1);
    }

    if (argc < 2)
    {
        printf("Errore nella chiamata da linea di comando del programma %s\n", argv[0]);
        exit(3);
    }

    for (i = 2; i <= argc - 1; i++)
    {
        ricopia(fp, argv[i]);
    }

    if ((fclose(fp)) != 0)
    {
        printf("Errore nella chiusura del file.\n");
        exit(2);
    }

    return 0;
}