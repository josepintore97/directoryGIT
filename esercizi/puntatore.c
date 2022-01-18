#include <stdio.h>
#include <stdlib.h>

void azzera(int *p)
{
    *p = 0;
}

int main()
{
    int a;

    scanf("%d", &a);

    azzera(&a);

    printf("%d\n", a);

    return 0;
}