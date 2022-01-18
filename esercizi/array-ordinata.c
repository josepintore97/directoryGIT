#include <stdio.h>
#define DIM 3

int main()
{

    int numeri[DIM];
    int m;
    int dl, j;

    for (dl = 0; dl < DIM; dl++)
    {
        scanf("%d", &m);

        j = dl;

        while (j > 0 && m < numeri[j - 1])
        {
            numeri[j] = numeri[j - 1];

            j--;
        }

        numeri[j] = m;
    }

    return 0;
}