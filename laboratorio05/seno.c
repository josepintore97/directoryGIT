#include <stdio.h>
#include <math.h>

main()
{
    float risultato;
    float a;
    float s;
    float x, y, z;
    int i, j, o, p, l;
    float c;
    float f;
    f = 0;
    risultato = 0;
    scanf("%f", &a);
    for (i = 1; i <= 10; i++)
    {
        x = 1;
        y = 1;
        for (j = 1; j < i; j++)
        {
            x = x * -1;
        }
        for (o = 0; o < 2 * f + 1; o++)
        {
            y = y * a;
        }
        f++;
        for (p = 0; p < i; p++)
        {
            z = 2 * p + 1;
            c = 1;
            for (l = z; l >= 1; l--)
            {
                c = c * l;
            }
        }

        s = (x * y) / c;
        risultato = s + risultato;
    }

    printf("%f\n", risultato);
}