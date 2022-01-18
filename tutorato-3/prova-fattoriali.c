#include <stdio.h>

int scomposizione(int n)
{
    int i;
    int c = 0;

    for (i = 5; i <= n; i *= 5)
    {
        c = c + (n / i);
    }

    return c;
}

int main()
{
    int a;

    scanf("%d", &a);
    printf("%d\n", scomposizione(a));

    return 0;
}