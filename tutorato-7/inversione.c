#include <stdio.h>

int main()
{
    char a[20];
    int dl = 0, i;

    scanf("%s", a);

    while (a[dl] != 0)
    {
        dl++;
    }

    char b[dl];

    for (i = 0; i < dl; i++)
    {
        b[dl - (i + 1)] = a[i];
        b[dl] = 0;
    }

    printf("%s\n", b);

    return 0;
}