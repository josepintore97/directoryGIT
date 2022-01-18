#include <stdio.h>
#include <math.h>

float media(float primo, float secondo)
{

    return (primo + secondo) / 2.0;
}

float radq(float a)
{
    float x = 1.0;

    while (fabs(a - x * x) >= 1e-5)
    {
        x = media(x, a / x);
    }

    return x;
}

int main()
{

    float a;

    printf("Digita un numero reale\n");
    scanf("%f", &a);

    printf("%f\n", radq(a));

    return 0;
}