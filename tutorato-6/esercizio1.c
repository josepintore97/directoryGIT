#include <stdio.h>
#define DIM 10

int primo(int n)
{
    int j = 1, i = 2;

    while (j != 0 && i < n)
    {
        j = n;

        while (j > 0)
        {
            j = j - i;
        }

        i = i + 1;
    }

    if (j != 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int a[DIM];
    int dl = 0, i;
    int maggiore = 0;

    printf("Inserisci un massimo di 10 numeri (per fermarsi digitare un  umero negativo)\n");

    scanf("%d", &a[dl]);

    while (a[dl] > 0 && dl < DIM - 1)
    {
        dl++;
        scanf("%d", &a[dl]);
    }

    for (i = 0; i < dl; i++)
    {
        if (primo(a[i]) && a[i] > maggiore)
        {
            maggiore = a[i];
        }
    }

    printf("Il maggiore e: %d\n", maggiore);

    return 0;
}