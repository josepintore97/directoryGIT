#include <stdio.h>
#include <math.h>

int fattoriale(int a)
{

    int i;
    int f = 1;

    for (i = 1; i <= a; i++)
    {
        f = f * i;
    }

    return f;
}

int main()
{

    int x;

    printf("Inserisci un numero intero per ottenere il suo fattoriale\n");
    scanf("%d", &x);
    printf("Il fattoriale di %d e %d\n", x, fattoriale(x));

    return 0;
}