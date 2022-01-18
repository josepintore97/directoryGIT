#include <stdio.h>

void swap(int *pa, int *pb)
{
    int t;

    t = *pa;
    *pa = *pb;
    *pb = t;
}

void ordina(int *a, int *b)
{
    if (*b < *a)
    {
        swap(a, b);
    }
}

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    ordina(&a, &b);

    printf("%d %d\n", a, b);

    return 0;
}