#include <stdio.h>

int PI(int n)
{
    int i, j;
    int c, v = 0;

    for (i = 1; i <= n; i++)
    {
        c = 0;
        for (j = 2; j <= i; j++)
        {
            if (i % j == 0 && c <= 1)
            {
                c++;
            }
        }
        if (c == 1)
        {
            v++;
        }
    }

    return v;
}

int main()
{
    int a;

    scanf("%d", &a);
    printf("%d\n", PI(a));

    return 0;
}