#include <stdio.h>
#define DIM 5

void insertion_sort(int *pa, int dl)
{
    for (dl = 0; dl < DIM; dl++)
    {
        int j = dl, m = pa[dl];

        while (j > 0 && m < pa[j - 1])
        {
            pa[j] = pa[j - 1];
            j--;
        }
        pa[j] = m;
    }
}

void stampa_array(int *pa, int dl)
{
    for (dl = 0; dl < DIM; dl++)
    {
        printf("%d  ", pa[dl]);
    }

    printf("\n");
}

int main()
{
    int a[] = {4, 1, 8, 0, 5}, i;

    insertion_sort(a, DIM);

    stampa_array(a, DIM);

    return 0;
}