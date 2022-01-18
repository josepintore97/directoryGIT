#include <stdio.h>

int main()
{

    char a[10], b[10];
    int ris, i = 0;

    scanf("%s %s", a, b);

    while (a[i] != '\0' && b[i] != '\0' && a[i] == b[i])
    {
        i++;
    }

    ris = a[i] - b[i];

    if (ris < 0)
    {
        printf("%s precede %s\n", a, b);
    }
    else if (ris == 0)
    {
        printf("%s uguale %s\n", a, b);
    }
    else
    {
        printf("%s precede %s\n", b, a);
    }

    return 0;
}