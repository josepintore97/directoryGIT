#include <stdio.h>

main()
{
    int x, y, x1, y1;
    int i;
    scanf("%d%d%d%d", &x, &y, &x1, &y1);
    if (x == x1 || y == y1)
    {
        printf("Si attaccano\n");
    }
    for (i = 1; i <= 8; i++)
    {
        if (x + i == x1 && y + i == y1)
        {
            printf("Si attaccano\n");
        }
        if (x - i == x1 && y - i == y1)
        {
            printf("Si attaccano\n");
        }
        if (x + i == x1 && y - i == y1)
        {
            printf("Si attaccano\n");
        }
        if (x - i == x1 && y + i == y1)
        {
            printf("Si attaccano\n");
        }
    }
}