#include <stdio.h>

main()
{
    int dato, conteggio;
    int n, m, k;
    int a, b, c;
    scanf("%d", &dato);
    for (n = 1; n <= dato; n++)
    {
        for (m = 1; m <= dato; m++)
        {
            for (k = 1; k <= dato; k++)
            {
                if (n >= 1 && m > n && k >= 1)
                {
                    if ((n % 2 == 0 && m % 2 == 1) || (n % 2 == 1 && m % 2 == 0))
                    {
                        conteggio++;
                        a = k * (m * m - n * n);
                        b = 2 * k * m * n;
                        c = k * (m * m + n * n);
                        if (c <= dato)
                        {
                            printf("%d %d %d\n", a, b, c);
                        }
                    }
                }
            }
        }
    }
    printf("%d\n", conteggio);
}