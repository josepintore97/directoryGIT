#include <stdio.h>

int potenza(int base, int esponente)
{
    int i, c = 1;

    for (i = 0; i < esponente; i++)
    {
        c = c * base;
    }

    return c;
}

float serie_pi_greco(int numero_serie)
{
    int i;
    float b, c;

    for (i = 0; i < numero_serie; i++)
    {
        b = (potenza(-1.0, i)) / ((2.0 * i) + 1);

        if (i == 0)
        {
            c = b;
        }
        else
        {
            c = c + b;
        }
    }

    return c * 4;
}

int main()
{

    int a;

    printf("Inserire un numero intero per ottenere un approssimazione del pi greco\n");
    scanf("%d", &a);
    printf("Il pi greco approssimato risulta : %.3f\n", serie_pi_greco(a));

    return 0;
}