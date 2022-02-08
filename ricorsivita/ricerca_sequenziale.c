#include <stdio.h>
#define DIM 20

int ricerca(int a[], int first, int last, int x)
{
    int m = (first + last) / 2;

    if (first > last)
        return -1;

    if (a[m] == x)
        return m;
    else if (a[m] > x)
        return ricerca(a, first, m - 1, x);
    else
        return ricerca(a, m + 1, last, x);
}

int main()
{
    int a[DIM] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int n, p;

    scanf("%d", &n);

    p = ricerca(a, 0, DIM - 1, n);

    if (p < 0)
        printf("Elemento non presente\n");
    else
        printf("posizione: %d\n", p);

    return 0;
}