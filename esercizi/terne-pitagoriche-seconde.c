#include <stdio.h>

main()
{
    int n;
    int a, b, c;
    int cont;
    cont = 0;
    scanf("%d", &n);
    for (a = 1; a <= n; a++)
    {
        for (b = a + 1; b <= n; b++)
        {
            for (c = b + 1; c <= n; c++)
            {
                cont++;
                if (a * a + b * b == c * c)
                {
                    printf("%d %d %d\n", a, b, c);
                }
            }
        }
    }
    printf("%d terne testate\n", cont);
}