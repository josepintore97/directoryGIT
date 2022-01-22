#include <stdio.h>
#include <stdlib.h>

struct Dipendenti
{
    char nome[11];
    int stipendio;
};

int main()
{
    FILE *fp;
    struct Dipendenti d[3];
    int i;

    if ((fp = fopen("Stipendi.txt", "rt")) == NULL)
    {
        printf("Errore nell apertura del file.\n");
    }

    for (i = 0; i < 3; i++)
    {
        fscanf(fp, "%s", d[i].nome);
        fscanf(fp, "%d", &d[i].stipendio);
    }

    if ((fclose(fp)) != 0)
    {
        printf("Errore nella chiusura del file.\n");
    }

    if ((fp = fopen("Stipendio.bin", "wb")) == NULL)
    {
        printf("Errore nell apertura del file.\n");
    }

    fwrite(d, 3, sizeof(struct Dipendenti), fp);

    if ((fclose(fp)) != 0)
    {
        printf("Errore nella chiusura del file.\n");
    }

    return 0;
}