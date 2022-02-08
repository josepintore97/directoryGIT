#include <stdio.h>

int Massimo(int a[], int n)
{
    int m;

    if (n == 0)
        return a[0];
    else
    {
        m = massimo(a, n - 1);

        if (m < a[n])
            return a[n];
        else
            return m;
    }
}

int main()
{
    int a[10];
    int n, i, massimo;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", a[i]);
    }

    massimo = Massimo(a, n);

    return 0;
}