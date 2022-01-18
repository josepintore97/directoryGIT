#include <stdio.h>

float fattoriale(int n)
{

    int i;
    float c = 1;

    for (i = 1; i <= n; i++)
    {
        c = c * i;
    }

    return c;
}

float potenza(float base, int esponente)
{

    int i, j;
    int c = 1;

    if (base < 0 && esponente == 0)
    {
        return 1;
    }
    else
    {
        for (i = 0; i < esponente; i++)
        {
            c = c * base;
        }
    }

    return c;
}

float seno(float x, int n)
{

    float c, z = 0;
    int i;

    for (i = 0; i <= n; i++)
    {
        c = (potenza(-1, i) * potenza(x, 2 * i + 1)) / fattoriale(2 * i + 1);
        z = z + c;
    }

    return z;
}

int main()
{

    int x, y;

    scanf("%d %d", &x, &y);
    printf("%f\n", seno(x, y));

    return 0;
}