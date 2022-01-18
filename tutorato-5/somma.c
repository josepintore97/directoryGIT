#include <stdio.h>

int main()
{
    int numeri[5];
    int i = 0;
    int controllo, somma;

    printf("Inserire 5 numeri maggiori di 0\n");

    while (i < 5)
    {
        scanf("%d", &controllo);

        if (controllo > 0)
        {
            numeri[i] = controllo;
            i++;
        }
    }

    somma = 0;

    for (i = 0; i < 5; i++)
    {
        somma = somma + numeri[i];
    }

    printf("La somma e: %d\n", somma);

    return 0;
}