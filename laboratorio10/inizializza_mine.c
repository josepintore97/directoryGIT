#include <stdio.h>
#include <stdlib.h>
#include "righe_colonne_caselle.h"
#define PROBmina 0.2

float rnd_float(float a, float b)
{
    return a + (b - a) * (float)rand() / RAND_MAX;
}

void inizializza_mine(Casella c[Nrighe][Ncolonne])
{
    int i, j;

    for (i = 0; i < Nrighe; i++)
    {
        for (j = 0; j < Ncolonne; j++)
        {

            if (rnd_float(0.0, 1.0) < PROBmina)
            {
                c[i][j].minata = -1;
            }
            else
            {
                c[i][j].minata = 0;
            }

            c[i][j].coperta = 1;
        }
    }
}