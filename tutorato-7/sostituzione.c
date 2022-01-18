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

    for (i = 0; i < dl; i++)
    {
        if (a[i] == 'a')
        {
            a[i] = 'u';
        }
    }

    printf("%s\n", a);

    return 0;
}