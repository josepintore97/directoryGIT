#include <stdio.h>

star()
{
    int i;

    for (i = 1; i <= 20; i++)
    {
        printf("*");
    }
    printf("\n");
}

main()
{
    int j;
    for (j = 1; j <= 5; j++)
    {
        star();
    }
}