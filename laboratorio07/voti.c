#include <stdio.h>
#define DIM 100

int main()
{
    int a[DIM], b[DIM], c[DIM];
    int i = 0, dl, j;
    int y = 0;
    int trovato;

    scanf("%d", &a[i]);

    while (dl < DIM && a[dl] > 0)
    {
        dl++;
        scanf("%d", &a[dl]);
    }

    int dlfr = 0;
    for (i = 0; i < dl; i++)
    {
        trovato = 0;

        for (j = 0; j < dlfr && !trovato; j++)
        {
            if (b[j] == a[i])
            {
                c[j]++;
                trovato = 1;
            }
        }
        if (!trovato)
        {
            b[dlfr] = a[i];
            c[dlfr] = 1;
            dlfr++;
        }
    }

    return 0;
}