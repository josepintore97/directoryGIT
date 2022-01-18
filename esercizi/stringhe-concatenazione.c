#include <stdio.h>

int main()
{

    char a[40], b[40], c[100];
    int i = 0;
    int j = 0;

    scanf("%s %s", a, b);

    while (a[i] || b[j])
    {
        if (a[i])
        {
            c[i] = a[i];
            i++;
        }
        else
        {
            c[i] = b[j];
            j++;
            i++;
        }
    }

    printf("%s\n", c);

    return 0;
}