#include <stdio.h>
#define DIM 10

int main()
{
    int numeri[DIM];
    int a, i;

    scanf("%d", &a);

    for (i = 0; i < DIM; i++)
    {
        numeri[i] = ++a;
        printf("%d\n", numeri[i]);
    }

    return 0;
}