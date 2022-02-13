#include <stdio.h>
#include <stdlib.h>

int somma(FILE *fp)
{
    int numero;

    if (fscanf(fp, "%d", &numero) != EOF)
    {
        return numero + somma(fp);
    }
    else
    {
        return 0;
    }
}

int main()
{
    FILE *fp;
    int s;

    if ((fp = fopen("numeri.txt", "r")) == NULL)
    {
        printf("Errore nell apertura del file.\n");
        exit(1);
    }

    s = somma(fp);
    printf("%d\n", s);

    if (fclose(fp) != 0)
    {
        printf("Errore nella chiusura del file.\n");
        exit(2);
    }

    return 0;
}