#include <stdio.h>
#include <math.h>

float media(float a, float b)
{
    return (a + b) / 2;
}

float radice_quadrata(float y)
{

    float x = 1.0;

    while (fabs(y - x * x) > 1e-6)
    {
        x = media(x, y / x);
    }

    return x;
}

int main()
{

    int x;

    printf("Inserisci un numero per ottenere la sua radice quadrata\n");
    scanf("%d", &x);
    printf("La radice quadrata di %d e %f\n", x, radice_quadrata(x));

    return 0;
}