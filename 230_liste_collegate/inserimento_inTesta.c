#include <stdio.h>
#include <stdlib.h>

typedef int Dato;

typedef struct nodo
{
    Dato dato;
    struct nodo *next;
} Nodo;

typedef Nodo *Lista;

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

int main(int argc, char *argv[])
{
    Lista l;

    insTesta(&l, 5);

    while (l)
    {
        printf("%d ", l->dato);
        l = l->next;
    }
    printf("\n");
}