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
    *pl = NULL;
}

void inserimento(Lista *pl, int numero)
{
    Nodo *aux = (Nodo *)malloc(sizeof(Nodo));

    if (aux == NULL)
    {
        printf("Errore.\n");
        exit(1);
    }

    aux->dato = numero;
    aux->next = *pl;
    *pl = aux;
}

void inserimentoInverso(Lista *pl, Lista l)
{
    while (l)
    {
        inserimento(pl, l->dato);
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
    Lista l1, l2;
    int i;

    inizializzaLista(&l1);
    inizializzaLista(&l2);

    for (i = 0; i < 5; i++)
    {
        inserimento(&l1, i);
    }

    inserimentoInverso(&l2, l1);

    stampa(l1);
    stampa(l2);

    return 0;
}