#include <stdio.h>

main()
{
    int a, m, c;
    int i, j, h;
    scanf("%d", &a);
    m = a * 2 - 1;
    c = 2;
    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= m; j++)
        {
            printf("*");
        }
        m = m - 2;
        printf("\n");
        for (h = 1; h < c; h++)
        {
            printf(" ");
        }
        c++;
    }
    printf("\n");
}