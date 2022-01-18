#include <stdio.h>

int main()
{

    char a[40], b[40];
    int j, i;
    int trovato;

    scanf("%s %s", a, b);

    trovato = 0;
    j = 0;

    while (!trovato && b[j])
    {
        int i = 0;
        while (a[i] && b[j + i] && a[i] == b[j + i])
        {
            i++;
        }
        if (!a[i])
        {
            trovato = 1;
        }
        j++;
    }

    if (trovato)
    {
        printf("%s fa parte di %s\n", a, b);
    }
    else
    {
        printf("%s non fa parte di %s\n", a, b);
    }

    return 0;
}