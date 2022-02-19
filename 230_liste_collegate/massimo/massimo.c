#include <stdio.h>
#include <stdlib.h>

#include "tipi.h"
#include "genera_liste.h"

int massimo(Lista l)
{
    int s = 0;

    while (l)
    {
        if (s < l->dato)
            s = l->dato;

        l = l->next;
    }

    return s;
}

int main(int argc, char *argv[])
{
    Lista l;

    listaNonOrdinata(&l, 10);

    printf("%d\n", massimo(l));

    return 0;
}