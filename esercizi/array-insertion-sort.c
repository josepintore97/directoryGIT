#include <stdio.h>
#define DIM 10

int main()
{

    int a[DIM];
    int dl;
    int m, j;
    int c = 0;

    for (dl = 0; dl < DIM; dl++)
    {
        scanf("%d", &a[dl]);

        if (a[dl] == 0)
        {
            break;
        }
        c++;
    }

    for (dl = 0; dl < c; dl++)
    {
        j = dl;
        m = a[j];

        while (j > 0 && m * m < a[j - 1] * a[j - 1])
        {
            a[j] = a[j - 1];

            j--;
        }

        a[j] = m;
    }

    for (dl = 0; dl < c; dl++)
    {
        printf("%d  ", a[dl]);
    }
    printf("\n");

    return 0;
}