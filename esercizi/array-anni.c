#include <stdio.h>
#define DIM 201

int bisestile(int anni)
{
    if (anni % 400 == 0)
    {
        return 1;
    }
    if (anni % 4 == 0 && anni % 100 != 0)
    {
        return 1;
    }

    return 0;
}

int main()
{

    int a[DIM], b[DIM];
    int i;
    int dl = 0;

    for (i = 0; i < DIM; i++)
    {
        a[i] = 1900 + i;

        if (bisestile(a[i]))
        {
            b[dl] = a[i];
            dl++;
        }
    }

    for (i = 0; i < dl; i++)
    {
        printf("%d\n", b[i]);
    }

    return 0;
}