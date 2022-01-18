#include <stdio.h>
#define DIM 100

int cubo(int n)
{
    int s = 0;
    int i;

    for (i = 1; i <= n; i++)
    {
        int j = 0;
        for (j = 0; j < n; j++)
        {
            s = s + n;
        }
    }

    return s;
}

int main()
{
    int a[DIM];
    int m;
    int i;
    int dl = 0;

    printf("Inserire un numero minore o uguale a 100\n");

    scanf("%d", &m);

    for (i = 1; i <= m; i++)
    {
        a[dl] = cubo(i);
        dl++;
    }

    for (i = 0; i < dl; i++)
    {
        printf("%d  ", a[i]);
    }

    printf("\n");

    return 0;
}