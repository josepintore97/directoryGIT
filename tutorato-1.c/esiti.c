#include <stdio.h>

main()
{
    int n;
    scanf("%d", &n);
    switch (n)
    {
    case 18 ... 20:
        printf("Sufficiente\n");
        break;
    case 21 ... 23:
        printf("Discreto\n");
        break;
    case 24 ... 26:
        printf("Buono\n");
        break;
    case 27 ... 29:
        printf("Distinto\n");
        break;
    case 30 ... 32:
        printf("Ottimo\n");
        break;
    }
}