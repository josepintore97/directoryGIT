#include <stdio.h>

main()
{
    int n, c, r;
    int i, a;
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
    {
        c = 0;
        for (a = 2; a <= n && c < 2; a++)
        {
            if (i % a == 0)
            {
                c++;
            }
        }
        if (c == 1)
        {
            r = 0;
            //printf("%d\n", i);
            while (n % i == 0)
            {
                r++;
                n = n / i;
            }
            if (r > 1)
            {
                printf("%d^%d ", i, r);
            }
            if (r == 1 )
            {
                printf("%d ", i);
            }

            
        }
    }
    printf("\n");
}