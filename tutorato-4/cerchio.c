#include <stdio.h>

float potenza(float base, float esponente)
{
    int i;
    float c = 1;

    for (i = 0; i < esponente; i++)
    {
        c = c * base;
    }

    return c;
}

float piGreco(int iterazioni)
{
    float piValue = 0;
    int i;

    for (i = 0; i < iterazioni; i++)
    {
        if (i % 2 == 0)
        {
            piValue = piValue + 1 / (2.0 * i + 1);
        }
        else
        {
            piValue = piValue - 1 / (2.0 * i + 1);
        }
    }

    return piValue * 4;
}

float diametroCerchio(float r)
{
    return r * 2;
}

float perimetroCerchio(float r)
{
    return (r + r) * piGreco(100);
}

float areaCerchio(float r)
{
    return piGreco(100) * potenza(r, 2);
}

int main()
{
    float a;

    printf("Raggio cerchio:\n");
    scanf("%f", &a);
    printf("Diametro: %.2f\n", diametroCerchio(a));
    printf("Perimetro: %.2f\n", perimetroCerchio(a));
    printf("Area: %.2f\n", areaCerchio(a));

    return 0;
}