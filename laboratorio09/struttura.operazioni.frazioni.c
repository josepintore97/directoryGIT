#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int numeratore;
    int denominatore;
} Frazione;

typedef enum
{
    somma,
    differenza,
    moltiplicazione,
    divisione

} Operatore;

typedef struct
{
    Operatore op;
    Frazione f1;
    Frazione f2;
} Operazione;

char leggi_carattere(void)
{
    char c;

    do
    {
        scanf("%c", &c);
    } while (c == ' ');

    return c;
}

void leggi_frazione(Frazione *pf)
{
    char c;

    scanf("%d", &pf->numeratore);
    c = leggi_carattere();
    scanf("%d", &pf->denominatore);

    if (c != '/')
    {
        printf("Sintassi errata. Rieseguire il programma\n");
        exit(2);
    }
}

void output(Frazione *pf)
{
    printf("%d/%d\n", pf->numeratore, pf->denominatore);
}

void Somma(Operazione *po, Frazione *pf)
{
    pf->numeratore = po->f1.numeratore * po->f2.denominatore + po->f1.denominatore * po->f2.numeratore;
    pf->denominatore = po->f1.denominatore * po->f2.denominatore;
}

void Differenza(Operazione *po, Frazione *pf)
{
    pf->numeratore = po->f1.numeratore * po->f2.denominatore - po->f1.denominatore * po->f2.numeratore;
    pf->denominatore = po->f1.denominatore * po->f2.denominatore;
}

void Moltiplicazione(Operazione *po, Frazione *pf)
{
}

void Divisione(Operazione *po, Frazione *pf)
{
}

void valuta(Operazione *po, Frazione *pf)
{
    switch (po->op)
    {
    case somma:
        Somma(po, pf);
        break;
    case differenza:
        Differenza(po, pf);
        break;
    case moltiplicazione:
        Moltiplicazione(po, pf);
        break;
    case divisione:
        Divisione(po, pf);
        break;
    }
}

void leggi_operazione(Operazione *po)
{
    Frazione risposta;

    printf("Inserire i termini delle frazione e il simbolo dell operatore\n");
    leggi_frazione(&po->f1);

    po->op = leggi_carattere();

    leggi_frazione(&po->f2);

    switch (po->op)
    {
    case '+':
        po->op = somma;
        break;
    case '-':
        po->op = differenza;
        break;
    case '*':
        po->op = moltiplicazione;
        break;
    case '/':
        po->op = divisione;
        break;
    default:
        printf("%c <- Sintassi errata rieseguire il programma");
        exit(2);
    }

    valuta(po, &risposta);

    output(&risposta);
}

int main()
{
    Operazione o;

    leggi_operazione(&o);

    return 0;
}