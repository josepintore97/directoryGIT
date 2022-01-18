#include <stdio.h>

main()
{
    int n, m;
    m=0;
    scanf("%d", &n);

    while (n > 0)
    {
        m = m + n;
        scanf("%d", &n);
    }
    printf("Rsiultato %d\n", m);
}