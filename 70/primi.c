#include <stdio.h>

int primi(int numero)
{

    int i;
    int c = 0;

    for (i = 1; i <= numero; i++ && c <= 2)
    {
        if (numero % i == 0)
        {
            c++;
        }
    }

    if (c == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(void)
{

    int x;
    int i;

    printf("Inserire un numero per ottenere tutti i numeri primi (indicati con 1) compresi tra 1 e quello digitato\n");
    scanf("%d", &x);
    for (i = 2; i <= x; i++)
    {
        printf("%4d  %4d\n", i, primi(i));
    }

    return 0;
}