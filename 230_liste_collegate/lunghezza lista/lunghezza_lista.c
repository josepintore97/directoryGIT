#include <stdio.h>
#include <stdlib.h>

#include "tipi.h"
#include "genera_liste.h"

int lunghezzaLista(Lista l)
{
    int dl = 0;

    while (l)
    {
        dl++;
        l = l->next;
    }

    return dl;
}

int main(int argc, char *argv[])
{
    Lista l;

    listaNonOrdinata(&l, 6);

    printf("%d\n", lunghezzaLista(l));

    return 0;
}