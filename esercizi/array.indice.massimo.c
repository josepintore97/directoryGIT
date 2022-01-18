#include <stdio.h>
#define DIM 10

int massimo(int a[], int dl)
{
    int i = 0, m = i;

    for (i = 1; i < dl; i++)
    {
        if (a[m] < a[i])
        {
            m = i;
        }
    }

    return m;
}

void leggi_array(int v[], int dl)
{
    int i;

    printf("Inserire %d numeri per ottenere l inndice del maggiore.\n", dl);

    for (i = 0; i < dl; i++)
    {
        scanf("%d", &v[i]);
    }
}

int main()
{
    int a[DIM], n;

    printf("Inserisci il numero di dati su cui si vuole operare.\n");

    scanf("%d", &n);

    leggi_array(a, n);

    printf("Indice del numero massimo: %d\n", massimo(a, n));

    return 0;
}