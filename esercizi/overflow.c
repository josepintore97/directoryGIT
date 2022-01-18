#include <stdio.h>

main()
{
    unsigned char x, y;
    char x1, y1;
    x = 255;
    y = x + 1;
    x1 = 127;
    y1 = x1 + 1;
    printf("%d+1 = %d\n", x, y);
    printf("%d+1 = %d\n", x1, y1);
}