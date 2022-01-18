#include <stdio.h>
#include <math.h>
#define DIM 15

typedef enum
{
    quadrato,
    cerchio,
    rettangolo,
    trinagolo
} TipoFigura;

typedef union
{
    struct
    {
        float lato;
    } datiQuadrato;

    struct
    {
        float raggio;
    } datiCerchio;

    struct
    {
        float base, altezza;
    } datiRettangolo;

    struct
    {
        float lato1, lato2, lato3;
    } datiTriangolo;
} DatiFigura;

typedef struct
{
    TipoFigura tipo;
    DatiFigura dati;
} Figura;

void assegnaQuadrato(Figura *pf, float l)
{
    pf->tipo = quadrato;
    pf->dati.datiQuadrato.lato = l;
}

void assegnaCerchio(Figura *pf, float r)
{
    pf->tipo = cerchio;
    pf->dati.datiCerchio.raggio = r;
}

void assegnaRettangolo(Figura *pf, float b, float a)
{
    pf->tipo = rettangolo;
    pf->dati.datiRettangolo.base = b;
    pf->dati.datiRettangolo.altezza = a;
}

void assegnaTriangolo(Figura *pf, float l1, float l2, float l3)
{
    pf->tipo = trinagolo;
    pf->dati.datiTriangolo.lato1 = l1;
    pf->dati.datiTriangolo.lato2 = l2;
    pf->dati.datiTriangolo.lato3 = l3;
}

int potenza(int base, int esponente)
{
    int i, risultato = 1;

    for (i = 0; i < esponente; i++)
    {
        risultato = risultato * base;
    }

    return risultato;
}

float pi()
{
    int i;
    float n = 0;

    for (i = 0; i < 1000; i++)
    {
        int c;

        if (!(i % 2) || i == 0)
        {
            c = 1;
        }
        else
        {
            c = -1;
        }

        n = n + ((c) / (2.0 * i + 1));
    }

    return n * 4;
}

float perimetro(Figura f)
{
    switch (f.tipo)
    {
    case quadrato:
        return f.dati.datiQuadrato.lato * 4;

    case cerchio:
        return f.dati.datiCerchio.raggio * 2 * pi();

    case rettangolo:
        return f.dati.datiRettangolo.altezza * 2 + f.dati.datiRettangolo.base * 2;

    case trinagolo:
        return f.dati.datiTriangolo.lato1 + f.dati.datiTriangolo.lato2 + f.dati.datiTriangolo.lato3;
    }
}

float area(Figura f)
{
    float p = perimetro(f) / 2;

    switch (f.tipo)
    {
    case quadrato:
        return f.dati.datiQuadrato.lato * f.dati.datiQuadrato.lato;

    case cerchio:
        return f.dati.datiCerchio.raggio * f.dati.datiCerchio.raggio;

    case rettangolo:
        return f.dati.datiRettangolo.altezza * f.dati.datiRettangolo.base;

        //case trinagolo:
        //return radqf(p * (p - f.dati.datiTriangolo.lato1) * (p - f.dati.datiTriangolo.lato2) * (p - f.dati.datiTriangolo.lato3));
    }
}

int main()
{
    Figura f;
    int a, b;

    assegnaQuadrato(&f, 2.5);

    printf("%.3f   %.3f\n", area(f), perimetro(f));

    return 0;
}