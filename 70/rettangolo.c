#include <stdio.h>

riga(int m)
{
    int i;
    for ( i = 0; i < m; i++)
    {
        printf("*");
    }
    printf("\n");
}

main()
{
    int m, n;
    int i;
    scanf("%d%d", &m, &n);

    for (i = 0; i < n; i++)
    {
        riga(m);
    }
    
}