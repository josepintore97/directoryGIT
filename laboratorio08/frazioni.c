#include <stdio.h>

typedef struct
{
    int num;
    int den;
} Frazione;

int valore_assoluto(int i)
{
    return i >= 0 ? i : -i;
}

int MCD(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }

    return a;
}

Frazione frazione(int num, int den)
{
    Frazione f;

    int mcd = MCD(valore_assoluto(num), valore_assoluto(den));

    f.num = num / mcd;
    f.den = den / mcd;

    return f;
}

Frazione leggi_frazione(void)
{
    int num, den;

    printf("Inserisci il numeratore e il denominatore\n");

    scanf("%d", &num);
    scanf("%d", &den);

    return frazione(num, den);
}

Frazione somma(Frazione f1, Frazione f2)
{
    printf("La somma e: ");

    return frazione(f1.num * f2.den + f1.den * f2.num, f1.den * f2.den);
}

Frazione sottrazione(Frazione f1, Frazione f2)
{
    printf("La sottrazione e: ");

    return frazione(f1.num * f2.den - f1.den * f2.num, f1.den * f2.den);
}

Frazione moltiplicazione(Frazione f1, Frazione f2)
{
    printf("La moltiplicazione e: ");

    return frazione(f1.num * f2.num, f1.den * f2.den);
}

Frazione divisione(Frazione f1, Frazione f2)
{
    printf("La divisione e: ");

    return frazione(f1.num * f2.den, f1.den * f2.num);
}

void frazione_frazionaria(Frazione f)
{

    printf("%d/%d\n", f.num, f.den);
}

void frazione_decimale(Frazione f)
{
    printf("%.3f\n", (float)f.num / f.den);
}

int main()
{
    Frazione f1, f2;
    int mcd;
    char segno;

    f1 = leggi_frazione();
    f2 = leggi_frazione();

    printf("Sceglio l operazione da eseguira tra le due frazioni:\n");

    scanf(" %c", &segno);

    switch (segno)
    {
    case '+':
        frazione_frazionaria(somma(f1, f2));
        break;

    case '-':
        frazione_frazionaria(sottrazione(f1, f2));
        break;

    case '*':
        frazione_frazionaria(moltiplicazione(f1, f2));
        break;

    case '/':
        frazione_frazionaria(divisione(f1, f2));
        break;
    }

    return 0;
}