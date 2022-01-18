#include <stdio.h>

void merge(int v[], int *pdlv, int x[], int *pdlx, int m[])
{
    int i, dlm = 0;

    for (i = 0; i < *pdlv; i++)
    {
        m[i] = v[i];
        dlm++;
    }

    for (i = 0; i < *pdlx; i++)
    {
        m[dlm] = x[i];
        dlm++;
    }

    for (i = 0; i < dlm; i++)
    {
        int j = i - 1;
        int temp = m[i];

        while (j >= 0 && temp < m[j])
        {
            m[j + 1] = m[j];
            j--;
        }

        m[j + 1] = temp;
    }
}

int main()
{
    int dla = 5;
    int a[5] = {1, 3, 4, 4, 5};
    int dlb = 5;
    int b[5] = {0, 1, 4, 6, 7};
    int c[20];
    int i;

    merge(a, &dla, b, &dlb, c);

    for (i = 0; i < 10; i++)
    {
        printf("%d ", c[i]);
    }

    printf("\n");

    return 0;
}