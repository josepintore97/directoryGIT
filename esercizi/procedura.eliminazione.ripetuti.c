#include <stdio.h>

void elimina_ripetizioni(int v[], int *pdl)
{
    int i;

    for (i = 0; i < *pdl; i++)
    {
        int j;

        for (j = i + 1; j < *pdl; j++)
        {
            if (v[i] == v[j])
            {
                int x;

                for (x = j; x < *pdl; x++)
                {
                    v[x] = v[x + 1];
                }
                *pdl -= 1;
            }
        }
    }
}

int main()
{
    int a[] = {3, 5, 0, 1, 8, 4, 3, 8, 4, 5, 10, 10, 5, 9, 2, 1};
    int dl = 16;
    int i;

    elimina_ripetizioni(a, &dl);

    for (i = 0; i < dl; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    return 0;
}