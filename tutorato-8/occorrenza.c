#include <stdio.h>

typedef struct
{
    int valore;
    int ripetizioni;
} Numeri;

int occorrenze(Numeri *p, int dl)
{
    int i, j;
    int valore;

    for (i = 0; i < dl; i++)
    {
        scanf("%d", &p[i].valore);
        p[i].ripetizioni = 1;

        for (j = i - 1; j >= 0; j--)
        {
            if (p[i].valore == p[j].valore)
            {
                ++p[i].ripetizioni;
            }
        }
    }

    for (i = 0; i < dl; i++)
    {
        if (p[i].ripetizioni > valore)
        {
            valore = p[i].ripetizioni;
        }
    }

    return valore;
}

int main()
{
    Numeri numeri[100];
    int n, k;
    int i;
    int valore = 0;

    printf("Inserire la dimensione dell array:\n");
    scanf("%d", &n);

    while (n > 100 || n < 1)
    {
        printf("Grandezza dell array non supportata.\nInserire nuovamente la grandezza dell array.\n");
        scanf("%d", &n);
    }

    printf("Inserire un numero minore o uguale a %d\n", n);
    scanf("%d", &k);

    while (k > n)
    {
        printf("Valore non supportato.\nInserire un numero minore o uguale a %d\n", n);
        scanf("%d", &k);
    }

    printf("Inserire %d numeri compresi fra 0 e %d\n", n, k - 1);

    valore = occorrenze(numeri, n);

    printf("Numero/i ripetuto piu volte:\n");

    for (i = 0; i < n; i++)
    {
        if (numeri[i].ripetizioni == valore)
        {
            printf("%d\n", numeri[i].valore);
        }
    }

    return 0;
}