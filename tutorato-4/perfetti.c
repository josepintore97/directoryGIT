#include <stdio.h>

int sommaDivisori(int numero)
{

    int i;
    int c = 0;

    for (i = 1; i <= numero / 2; i++)
    {
        if (numero % i == 0)
        {
            c = c + i;
        }
    }

    return c;
}

int main()
{

    int x;

    scanf("%d", &x);

    if (x == sommaDivisori(x))
    {
        printf("Numero perfetto\n");
    }
    else
    {
        printf("Numero NON perfetto\n");
    }

    return 0;
}