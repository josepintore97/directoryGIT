#include <stdio.h>
#include <stdlib.h>
#define DIM 30

struct Persone
{
    char cognome[31], nome[31], sesso[2];
    int anno;
};

int main()
{
    FILE *fp;
    struct Persone v[DIM];
    int i = 0;

    if ((fp = fopen("people.dat", "rb")) == NULL)
    {
        printf("Errore nell apertura del file.\n");
        exit(1);
    }

    while (fread(v, sizeof(struct Persone), DIM, fp) == 4)
    {
        i++;
    }

    if (fclose(fp) != 0)
    {
        printf("Errore nella chiusura del file.\n");
    }

    return 0;
}