#include <stdio.h>
#include <math.h>

main()
{
    int a;
    int i;
    float x1 = 1.0;
    scanf("%d", &a);
    while (!(fabsf(a - x1 * x1) < 1e-6))
    {
        x1 = (x1 + (a / x1)) / 2;
    }
    printf("%f\n", x1);
}