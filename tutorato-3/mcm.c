#include <stdio.h>

int main()
{

    int a, b;
    int i = 1;

    printf("Inserire due numeri per ottenerene il MCM\n");
    scanf("%d %d", &a, &b);

    while (!(i % a == 0 && i % b == 0))
    {
        i++;
    }

    printf("%d\n", i);

    return 0;
}