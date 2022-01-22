#include <stdio.h>

struct Dipendenti
{
    char nome[10];
    int stipendio;
};

int main()
{
    FILE *fp;
    struct Dipendenti d[10];
    int i, n, a;

    if ((fp = fopen("Stipendio.bin", "r+b")) == NULL)
    {
        printf("Errore nell apertura del file.\n");
    }

    n = fread(d, sizeof(struct Dipendenti), 10, fp);

    for (i = 0; i < n; i++)
    {
        if (d[i].stipendio < 1000)
        {
            a = (d[i].stipendio / 100) * 10;
            d[i].stipendio = d[i].stipendio + a;
        }
    }

    rewind(fp);

    fwrite(d, sizeof(struct Dipendenti), n, fp);

    if ((fclose(fp)) != 0)
    {
        printf("Errore nella chiusura del file.\n");
    }

    return 0;
}