#include <stdio.h>

int main()
{
    char a[40];
    char c;
    int i = 0, t = 0;

    scanf("%c %s", &c, a);

    while (a[i] && t == 0)
    {
        i++;
        if (a[i] == c)
        {
            t = 1;
            printf("il carattere %c compare nella frase %s\n", c, a);
        }
    }

    return 0;
}