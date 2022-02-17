#include <stdio.h>
#include <stdlib.h>

#include "lista.h"

void inizializza_lista(Lista *pl)
{
    pl->n_elementi = 0;
}

int piena(Lista l)
{
    return l.n_elementi == DIM;
}

void inserimento_ord(Lista *pl, int numero)
{
    int i = pl->n_elementi;

    if (piena(*pl))
    {
        printf("Capacita massima.\n");
        exit(1);
    }

    while (i > 0 && numero < pl->dati[i - 1])
    {
        pl->dati[i] = pl->dati[i - 1];
        i--;
    }

    pl->dati[i] = numero;
    pl->n_elementi++;
}

void stampa(Lista l)
{
    int i;

    for (i = 0; i < l.n_elementi; i++)
    {
        printf("%d ", l.dati[i]);
    }
    printf("\n");
}