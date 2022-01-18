#include <stdio.h>

int fattoriale(int a)
{

    int i;
    int c = 1;

    for (i = a; i >= 1; i--)
    {
        c = c * i;
    }

    return c;
}

int main()
{
    int a;
    int i, c;

    printf("Inserire un numero intero per sapere quanti zero ci sono nel suo fattoriale\n");
    scanf("%d", &a);

    c = fattoriale(a);

    while (c % 10 == 0)
    {
        i++;
        c = c / 10;
    }

    printf("%d zeri presenti %d\n", fattoriale(a), i);

    return 0;
}