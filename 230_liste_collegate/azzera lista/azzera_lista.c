#include <stdio.h>

#include "tipi.h"
#include "genera_liste.h"

void azzeraLista(Lista l)
{
    while (l)
    {
        l->dato = 0;
        l = l->next;
    }
}

void stampa(Lista l)
{
    while (l)
    {
        printf("%d ", l->dato);
        l = l->next;
    }
    printf("\n");
}

int main(int argc, char *argv[])
{
    Lista l;

    listaNonOrdinata(&l, 6);

    azzeraLista(l);

    stampa(l);

    return 0;
}