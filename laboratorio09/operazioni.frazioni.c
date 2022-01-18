#include <stdio.h>
#include <string.h>

typedef struct
{
    int numeratore;
    int denominatore;
} Frazione;

typedef struct
{
    char segno[20];
} Operazioni;

void output(Frazione *f)
{
    printf("%td\n---\n%td\n", f->numeratore, f->denominatore);
}

void input(Frazione *f)
{
    scanf("%d %d", &f->numeratore, &f->denominatore);
}

void crea_frazione(Frazione *f)
{
    input(f);
}

void MCM(Frazione *f1, Frazione *f2, int *mcm)
{

    if (f1->denominatore > f2->denominatore)
    {
        int i = 1;
        *mcm = f1->denominatore;

        while (!(*mcm % f2->denominatore == 0))
        {
            i++;
            *mcm = f1->denominatore * i;
        }
    }
    else
    {
        int i = 1;
        *mcm = f2->denominatore;

        while (!(*mcm % f1->denominatore == 0))
        {
            i++;
            *mcm = f2->denominatore * i;
        }
    }
}

int MCD(int n, int d)
{
    while (n != d)
    {
        if (n > d)
        {
            n = n - d;
        }
        else
        {
            d = d - n;
        }
    }

    return n;
}

void riduzione_termini(Frazione *f)
{
    int m = MCD(f->numeratore, f->denominatore);

    f->numeratore /= m;
    f->denominatore /= m;
}

void Somma(Frazione *f1, Frazione *f2)
{
    Frazione f3;
    int mcm;

    MCM(f1, f2, &mcm);

    f3.denominatore = mcm;
    f3.numeratore = (mcm / f1->denominatore) * f1->numeratore + (mcm / f2->denominatore) * f2->numeratore;

    riduzione_termini(&f3);

    output(&f3);
}

void Sottrazione(Frazione *f1, Frazione *f2)
{
}

void Moltiplicazione(Frazione *f1, Frazione *f2)
{
}

void Divisione(Frazione *f1, Frazione *f2)
{
}

void scelta_operatore(Frazione *f1, Frazione *f2)
{
    char s[20];
    Operazioni segno;

    scanf("%s", segno.segno);

    !strcmp(segno.segno, "somma") ? Somma(f1, f2) : !strcmp(segno.segno, "sottrazione")   ? Sottrazione(f1, f2)
                                                : !strcmp(segno.segno, "moltiplicazione") ? Moltiplicazione(f1, f2)
                                                : !strcmp(segno.segno, "divisione")       ? Divisione(f1, f2)
                                                                                          : NULL;
}

void operazioni(Frazione *f1, Frazione *f2)
{
    crea_frazione(f1);
    crea_frazione(f2);

    scelta_operatore(f1, f2);
}

int main()
{
    Frazione f1, f2;

    operazioni(&f1, &f2);

    return 0;
}