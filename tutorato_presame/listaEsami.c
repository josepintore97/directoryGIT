#include <stdio.h>
#include <stdlib.h>

#include "listaEsami.h"

void nuovaLista(Lista *pl) { *pl = NULL; }

void inTesta(Lista *pl, Studente d)
{
    Nodo *aux = (Nodo *)malloc(sizeof(Nodo));
    aux->dato = d;
    aux->next = *pl;
    *pl = aux;
}

void aggiorna(Lista *pl, Record v)
{
    while (*pl != NULL && (*pl)->dato.matricola != v.matricola)
    {
        pl = &(*pl)->next;
    }

    if (*pl == NULL)
    {
        Studente d;
        d.matricola = v.matricola;
        d.pratico = -1;
        d.teorico = -1;
        inTesta(pl, d);
    }

    switch (v.prova)
    {
    case 'P':
        (*pl)->dato.pratico = v.punteggio;
        break;

    case 'T':
        (*pl)->dato.teorico = v.punteggio;
    }
}

Esito esito(int pratico, int teorico)
{
    Esito e;

    e.superato = pratico >= 12 && teorico >= 6;
    e.somma = pratico + teorico;

    return e;
}

void stampa(Lista pl)
{
    while (pl != NULL)
    {
        Esito e = esito(pl->dato.pratico, pl->dato.teorico);
        printf("%d ", pl->dato.matricola);

        if (e.superato)
        {
            if (e.somma > 30)
            {
                printf("30 e lode\n");
            }
            else
            {
                printf("%d\n", e.somma);
            }
        }
        else
        {
            printf("Non superato.\n");
        }

        pl = pl->next;
    }
}

//funzioni seconda parte

int confrontoEsiti(Esito e1, Esito e2)
{
    if (e1.superato != e2.superato)
    {
        //nel caso lo abbiano superato entrambi oppure no
        return e1.superato - e2.superato;
    }
    else
    {
        //nel caso in cui uno dei due lo ha superato e l altro no
        return e1.somma - e2.somma;
    }
}

int confrontoStudente(Studente s1, Studente s2)
{
    int ce = confrontoEsiti(esito(s1.pratico, s1.teorico), esito(s2.pratico, s2.teorico));

    if (ce != 0)
    {
        return ce;
    }
    else
    {
        return s1.matricola - s2.matricola;
    }
}

void insOrd(Lista *pl, Studente s)
{
    while (*pl && confrontoStudente((*pl)->dato, s) > 0)
    {
        *pl = &(*pl)->next;
    }

    insTesta(pl, s);
}

void eliminaTesta(Lista *pl)
{
    Nodo *aux = *pl;
    (*pl) = (*pl)->next;
    free(aux);
}

void insertionSort(Lista *pl)
{
    Lista lOrd;

    nuovaLista(&lOrd);

    while (*pl)
    {
        insOrd(&lOrd, (*pl)->dato);
    }

    *pl = lOrd;
}