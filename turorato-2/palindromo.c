#include <stdio.h>

main()
{
    int a,a1; 
    int b, c;
    c = 0;
    scanf("%d", &a);
    if (a < 2147483647)
    {
        a1=a;
        while (a != 0)
        {
            b = a % 10;
            c = c * 10 + b;
            a = a / 10;
        }
        printf("%d\n",c);
        if (a1==c)
        {
            printf("Polindromo %d\n",c);
        }
        
    }
}