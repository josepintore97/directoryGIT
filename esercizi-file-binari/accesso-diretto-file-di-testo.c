#include <stdio.h>

int main()
{
    FILE *fp;
    char nomeFile[21], p;

    printf("Inserire il nome del file che si vuole aprire.\n");
    scanf("%s", nomeFile);

    if ((fp = fopen(nomeFile, "r+")) == NULL)
    {
        printf("Errore nell apertura del file %s.\n", nomeFile);
    }

    while ((fscanf(fp, "%c", &p)) != EOF)
    {
        if (p >= 'a' && p <= 'z')
        {
            fseek(fp, ftell(fp) - 1, SEEK_SET);
            fprintf(fp, "%c", p - ('a' - 'A'));
            fseek(fp, 0, SEEK_CUR);
        }
    }

    if ((fclose(fp)) != 0)
    {
        printf("Errore nella chiusura del file %s.\n", nomeFile);
    }

    return 0;
}