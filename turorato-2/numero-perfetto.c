#include <stdio.h>

main()
{
    int i, j;
    int s, c, d;

    scanf("%d", &s);
    if (s >= 1 && s <= 10000)
    {
        c = 0;
        d = 0;
        for (i = 2; i <= s; i++)
        {
            if (s % i == 0)
            {
                c = s / i;
                d = d + c;
            }
        }
        if (d == s)
        {
            printf("Numero perfetto\n");
        }
    }
}