#include <stdio.h>

int simm(int M[][20], int x, int y)
{
    int i, j;
    int c = 0;

    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            if (i != j && M[i][j] == M[j][i])
            {
                c++;
            }
        }
    }

    if (x == y && c == ((x * y) - x))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void lettura(int M[][20], int *x, int *y)
{
    int i, j;

    scanf("%d %d", &(*x), &(*y));

    printf("Inserire i valori della matrice\n");

    for (i = 0; i < *x; i++)
    {
        for (j = 0; j < *y; j++)
        {
            scanf("%d", &M[i][j]);
        }
    }
}

int main()
{
    int x, y;
    int M[20][20];
    int i, j, simmetrica = 0;

    lettura(M, &x, &y);
    simmetrica = simm(M, x, y);

    if (simmetrica != 0)
    {
        printf("La matrice inserita e simmetrica\n");
    }
    else
    {
        printf("La matrice non e simmetrica\n");
    }

    return 0;
}