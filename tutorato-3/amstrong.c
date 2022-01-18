#include <stdio.h>

int potenza(int base, int esponente)
{

    int i;
    int c = 1;

    for (i = 1; i <= esponente; i++)
    {
        c = c * base;
    }

    return c;
}

int main()
{

    int a, b = 0;
    int c = 0;
    int numero = 0;

    scanf("%d", &a);

    b = a;

    while (b != 0)
    {
        c++;
        b = b / 10;
    }

    b = a;

    while (b != 0)
    {
        numero = numero + potenza(b % 10, c);
        b = b / 10;
    }

    if (a == numero)
    {
        printf("Numero Amstrong\n");
    }
    else
    {
        printf("Numero non Amstrong\n");
    }

    return 0;
}