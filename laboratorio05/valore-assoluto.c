#include <stdio.h>

main()
{
    int a;
    scanf("%d", &a);
    printf("%d\n", a < 0 ? -a : a);
}