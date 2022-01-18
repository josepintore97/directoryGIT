#include <stdio.h>

main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    if (n % m == 0 && m > 0)
    {
        printf("Sono divisibili\n");
        printf("Risultato = %d\n",n/m);
    }
    else
    {
        printf("Non sono divisibili\n");
    }
    
}