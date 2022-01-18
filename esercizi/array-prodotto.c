#include <stdio.h>
#define DIM 5

int main()
{

    int a[DIM];
    int i;
    int p = 1;

    for (i = 0; i < DIM; i++)
    {
        scanf("%d", &a[i]);
        p = a[i] * p;
    }

    for (i = 0; i < DIM; i++)
    {
        if (i != DIM - 1)
        {
            printf("%d x ", a[i]);
        }
        else
        {
            printf("%d = %d\n", a[i], p);
        }
    }

    return 0;
}