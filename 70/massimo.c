#include <stdio.h>
#include <math.h>

float massimo(float a, float b)
{

    if (a >= b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{

    float x, y, z;

    printf("Inserire tre numeri per ottenere il maggiore\n");
    scanf("%f %f %f", &x, &y, &z);
    printf("Il maggiore fra %f , %f e %f e: %f\n", x, y, z, massimo(massimo(x,y), z));

    return 0;
}