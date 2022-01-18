#include <stdio.h>

main()
{
    int a, b;
    int x, y;
    int x1, y1;
    int x2, y2;
    scanf("%d %d %d %d %d %d", &x, &y, &x1, &y1, &x2, &y2, &x2, &y2);
    if ((x == x1 && x == x2) || (y == y1 && y == y2) || (x + y == 4 && x1 + y1 == 4 && x2 + y2 == 4) || (x == y && x1 == y1 && x2 == y2))
    {
        printf("Tris\n");
    }
}