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
    pl = NULL;
}

Lista *ricerca(Lista *pl, int dato)
{
    while (*pl)
    {

        if ((*pl)->dato < dato)
            break;

        pl = &(*pl)->next;
    }

    return pl;
}

void insTesta(Lista *pl, int dato)
{
    Nodo *aux = (Nodo *)malloc(sizeof(Nodo));

    if (aux == NULL)
    {
        printf("Errore.\n");
        exit(1);
    }

    aux->dato = dato;
    aux->next = *pl;
    *pl = aux;
}

void insOrd(Lista *pl, int dato)
{
    pl = ricerca(pl, dato);
    insTesta(pl, dato);
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

    inizializzaLista(&l);
    insTesta(&l, 1);
    insTesta(&l, 2);
    insTesta(&l, 4);
    stampa(l);
    insOrd(&l, 3);
    stampa(l);

    return 0;
}