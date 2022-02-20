#include <stdio.h>
#include <stdlib.h>

typedef int Dato;

typedef struct nodo
{
    Dato dato;
    struct nodo *next;
} Nodo;

typedef Nodo *Lista;

void inizializzaLista(Lista *pl)
{
    pl == NULL;
}

void insTesta(Lista *pl, int d)
{
    Nodo *aux = (Nodo *)malloc(sizeof(Nodo));

    if (aux == NULL)
    {
        printf("Errore.\n");
        exit(1);
    }

    aux->dato = d;
    aux->next = *pl;
    *pl = aux;
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

Lista *ricerca(Lista *pl, int d)
{
    while (*pl)
    {
        if ((*pl)->dato > d)
        {
            break;
        }
        pl = &(*pl)->next;
    }

    return pl;
}

void insOrdinato(Lista *pl, int d)
{
    pl = ricerca(pl, d);
    insTesta(pl, d);
}

void eliminaTesta(Lista *pl)
{
    Nodo *aux = *pl;
    *pl = (*pl)->next;
    free(aux);
}

void ordinaLista(Lista *pl)
{
    Lista l2;
    inizializzaLista(&l2);

    while (*pl)
    {
        insOrdinato(&l2, (*pl)->dato);
        eliminaTesta(pl);
    }
    *pl = l2;
}

int main(int argc, char *argv[])
{
    Lista l;

    inizializzaLista(&l);

    insTesta(&l, 3);
    insTesta(&l, 1);
    insTesta(&l, 8);
    insTesta(&l, 5);
    insTesta(&l, 2);

    stampa(l);

    ordinaLista(&l);

    stampa(l);

    return 0;
}