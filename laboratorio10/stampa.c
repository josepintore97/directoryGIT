#include <stdio.h>
#include "righe_colonne_caselle.h"

void stampa(Casella c[][Ncolonne])
{
    int i, j;
    int lettera = 'A';

    printf("  -");

    for (j = 0; j < 2 * Ncolonne; j++)
    {
        printf("-");
    }
    printf("\n");

    for (i = 0; i < Nrighe; i++)
    {
        printf("%2d", Nrighe - i);
        for (j = 0; j < Ncolonne; j++)
        {
            printf("|");
            c[i][j].coperta ? printf("#") : c[i][j].minata == -1 ? printf("*")
                                        : c[i][j].minata == 0    ? printf(" ")
                                                                 : printf("%d", c[i][j].minata);
        }

        printf("|\n");

        printf("  -");

        for (j = 0; j < 2 * Ncolonne; j++)
        {
            printf("-");
        }

        printf("\n");
    }

    printf("   %c", lettera);
    for (i = 1; i < Ncolonne; i++)
    {
        printf(" %c", lettera + i);
    }

    printf("\n\n");
}