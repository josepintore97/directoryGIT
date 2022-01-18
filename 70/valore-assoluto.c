#include <stdio.h>
#include <math.h>

int valore_Assoluto(int x)
{

    x = fabs(x);
    return x;
}

int main()
{

    int a;

    printf("Inserisci un numero intero per ottenere il suo valore assoluto\n");
    scanf("%d", &a);
    printf("Il valore assoluto e: %d\n", valore_Assoluto(a));

    return 0;
}