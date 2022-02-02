#include <stdio.h>

struct persone
{
    char nome[21], via[21];
    int numero;
};

int main()
{
    FILE *fp;
    struct persone p[5];
    int i = 0;
    char c;

    if ((fp = fopen("ricerca.txt", "r+")) == NULL)
    {
        printf("Errore nell apertura del file.\n");
    }

    while ((fscanf(fp, "%c", &c)) != EOF)
    {
        fseek(fp, ftell(fp) - 1, SEEK_SET);
        fscanf(fp, "%s", p[i].nome);
        fscanf(fp, "%s", p[i].via);
        fscanf(fp, "%d", &p[i].numero);
        i++;
    }

    if ((fclose(fp)) != 0)
    {
        printf("Errore nella chiusura del file.\n");
    }

    if ((fp = fopen("INDIRRIZZI.IND", "wb")) == NULL)
    {
        printf("Errore nell apertura del file.\n");
    }

    fwrite(p, sizeof(struct persone), i, fp);

    if ((fclose(fp)) != 0)
    {
        printf("Errore nella chiusura del file.\n");
    }

    return 0;
}