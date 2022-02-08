#include <stdio.h>

int Somma(int a[], int n)
{
    if (n == 0)
    {
        return a[0];
    }
    else
    {
        return a[n] + Somma(a, n - 1);
    }
}

int main()
{
    int a[10];
    int n, i, somma;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    somma = Somma(a, n - 1);

    printf("%d\n", somma);

    return 0;
}