#include <stdio.h>

#include "lista.h"

int main(int argv, char *argc)
{
    Lista l;
    int numero;

    inizializza_lista(&l);

    scanf("%d", &numero);
    while (numero > 0)
    {
        inserimento_ord(&l, numero);
        scanf("%d", &numero);
    }

    stampa(l);

    return 0;
}