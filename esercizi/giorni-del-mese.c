#include <stdio.h>

main()
{
    int m, a;
    scanf("%d  %d", &m, &a);
    if (m == 2)
    {
        if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
        {
            printf("28\n");
        }
        else
        {
            printf("29\n");
        }
    }
    else
    {
        if (m == 4 || m == 6 || m == 9 || m == 11)
        {
            printf("30\n");
        }
        else
        {
            printf("31\n");
        }
    }
}