#include <stdio.h>
#define DIM 10

int main()
{

    int numeri[DIM];
    int i;

    for (i = 0; i < DIM; i++)
    {
        numeri[i] = (i + 1) * (i + 1);
        printf("%d\n", numeri[i]);
    }

    return 0;
}