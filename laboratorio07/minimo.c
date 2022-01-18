#include <stdio.h>
#define DIM 5

float valoreAssoluto(float a)
{
    if (a > 0)
    {
        return a;
    }
    else
    {
        return -a;
    }
}

int main()
{
    float a[DIM];
    int i;

    printf("Inserisci 5 numeri reali per ottenere il valore minimo assoluto\n");

    for (i = 0; i < DIM; i++)
    {
        scanf("%f", &a[i]);
    }

    for (i = 1; i < DIM; i++)
    {
        if (valoreAssoluto(a[i]) < valoreAssoluto(a[0]))
        {
            a[0] = a[i];
        }
    }

    printf("Il valore assoluto minimo della sequenza inserita e:%.2f\n", a[0]);

    return 0;
}