#include <stdio.h>

struct Dipendenti
{
    char nome[11];
    int stipendio;
};

int main()
{
    FILE *fp;
    struct Dipendenti d[3];

    if ((fp = fopen("Stipendio.bin", "rb")) == NULL)
    {
        printf("Errore nell apertura del file.\n");
    }

    fread(d, sizeof(struct Dipendenti), 3, fp);

    if ((fclose(fp)) != 0)
    {
        printf("Errore nella chiusura del file.\n");
    }

    return 0;
}