#include <stdio.h>
#define DIM 10

float radice(float y)
{
    float m, b, a, d;

    if (y > 1)
    {
        a = 1;
        b = y;
    }
    else
    {
        a = y;
        b = 1;
    }

    do
    {
        m = (a + b) / 2.0;

        if (m * m < y)
        {
            a = m;
        }
        else
        {
            b = m;
        }

        d = m * m - y;

        if (d < 0)
        {
            d = -d;
        }

    } while (d > 0.00001);

    return m;
}

int main()
{
    float a[DIM], n;
    int dl = 0, i;

    printf("Inserisci 10 numeri reali\n");
    scanf("%f", &n);

    while (dl < DIM - 1)
    {
        if (n > 0)
        {
            a[dl] = radice(n);
            dl++;
        }

        scanf("%f", &n);
    }

    for (i = 0; i < dl - 1; i++)
    {
        printf("%.3f  ", a[i]);
    }

    printf("\n");

    return 0;
}