#include <stdio.h>

float potenza(float base, float esponente)
{

    int i;
    float c = 1;

    if (esponente < 0)
    {
        for (i = 1; i <= - esponente; i++)
        {
            c = c * base;
        }
        c = 1.0 / c;
    }
    else
    {
        for (i = 1; i <= esponente; i++)
        {
            c = c * base;
        }
    }

    return c;
}

int main()
{

    int a, b;

    scanf("%d %d", &a, &b);
    printf("%f\n", potenza(a, b));

    return 0;
}