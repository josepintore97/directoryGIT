#include <stdio.h>

main()
{
    int n, m;
    int i, j;
    scanf("%d %d", &n, &m);
    if (n > 0 && n < 9 && m > 0 && m < 9)
    {
        if ((n % 2 == 0 && m % 2 == 0) || (n % 2 == 1 && m % 2 == 1))
        {
            printf("Casella bianca\n");
        }
        else
        {
            printf("Casella nera\n");
        }

        /*if ((n % 2 == 1 && m % 2 == 0) || (n % 2 == 0 && m % 2 == 1))
        {
            printf("Casella nera\n");
        }*/
    }
    else
    {
        printf("Posizione non valida\n");
    }
}