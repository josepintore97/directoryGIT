#include <stdio.h>
#include "righe_colonne_caselle.h"

void mine_adiacenti(Casella c[Nrighe][Ncolonne])
{
    int i, j;

    for (i = 0; i < Nrighe; i++)
    {
        for (j = 0; j < Ncolonne; j++)
        {
            int x, y, g, k;
            int cont = 0;
            if (i == 0)
            {
                x = i;
            }
            else
            {
                x = i - 1;
            }

            if (j == 0)
            {
                y = j;
            }
            else
            {
                y = j - 1;
            }

            if (c[i][j].minata != -1)
            {
                for (g = x; g <= i + 1 && g < Nrighe; g++)
                {
                    for (k = y; k <= j + 1 && k < Ncolonne; k++)
                    {
                        if (c[g][k].minata == -1)
                        {
                            cont++;
                        }
                    }
                }
            }

            if (cont > 0)
            {
                c[i][j].minata = cont;
            }
        }
    }
}