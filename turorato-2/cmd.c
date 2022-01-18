#include <stdio.h>

main()
{
    int a, b, c;
    scanf("%d%d", &a, &b);
    if ((b >= 0 && b < a) || (a >= 0 && a < b))
    {
        while (b != 0)
        {
            c = b;
            b = a % b;
            a = c;
        }
        printf("CMD %d\n", c);
    }
}