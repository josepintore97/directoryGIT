#include <stdio.h>
#define DIM 21

int main()
{

    float a, b, c;
    float ascisse[DIM], ordinate[DIM];
    int i = 0;

    scanf("%f %f %f", &a, &b, &c);

    for (i = 0; i < DIM; i++)
    {
        ascisse[i] = -1.0 + 0.1 * i;

        ordinate[i] = a * (ascisse[i] * ascisse[i]) + (b * ascisse[i]) + c;

        printf("%.2f  %.2f\n", ascisse[i], ordinate[i]);
    }

    return 0;
}