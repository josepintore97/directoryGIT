#include <stdio.h>

//typedef int riga[3];
//typedef riga matrice[3];

int main()
{
    //matrice identita;  solitamente per questi casi si preferisce definire una matrice senza il typdef
    int M[3][3];
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j)
            {
                M[i][j] = 1;
            }
            else
            {
                M[i][j] = 0;
            }
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    return 0;
}