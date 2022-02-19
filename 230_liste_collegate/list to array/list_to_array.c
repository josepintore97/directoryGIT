#include <stdio.h>
#include <stdlib.h>

#include "tipi.h"
#include "genera_liste.h"

int *allo(Lista l)
{
    int *a;
    int i;

    if ((a = (int *)malloc(6 * sizeof(int))) == NULL)
    {
        printf("Errore.\n");
        exit(-1);
    }

    for (i = 0; i < 6; i++)
    {
        if (l)
        {
            a[i] = l->dato;
            l = l->next;
        }
    }

    return a;
}

int main(int argc, char *argv[])
{
    Lista l;
    int *array;
    int i;

    listaNonOrdinata(&l, 6);
    array = allo(l);
    l = NULL;

    for (i = 0; i < 6; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}