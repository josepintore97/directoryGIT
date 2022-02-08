#include <stdio.h>

typedef struct
{
    char nome[20];
    char indirizzo[30];
    char numero[15];
} Persona;

int main()
{
    FILE *fp;
    Persona persona[100];
    int continua = 1;
    int i = 0, j;

    while (continua && i < 100)
    {
        printf("Inserire il nome: ");
        scanf("%s", persona[i].nome);
        printf("Inserire l indirizzo : ");
        scanf("%s", persona[i].indirizzo);
        printf("Inserire il numero di cellulare: ");
        scanf("%s", persona[i].numero);

        printf("Continuare? (1=si 0=no)\n");
        scanf("%d", &continua);

        if (continua)
            i++;
    }

    if ((fp = fopen("Rubrica.txt", "wt")) == NULL)
    {
        printf("Errore nell apertura del file.\n");
    }

    for (j = 0; j <= i; j++)
    {
        fprintf(fp, "%s ", persona[j].nome);
        fprintf(fp, "%s ", persona[j].indirizzo);
        fprintf(fp, "%s\n", persona[j].numero);
    }

    if (fclose(fp) != 0)
    {
        printf("Errore nella chiusura del file.\n");
    }

    if ((fp = fopen("Rubrica.dat", "wb")) == NULL)
    {
        printf("Errore nell apertura del file.\n");
    }

    for (j = 0; j <= i; j++)
    {
        fwrite(persona[j].nome, sizeof(persona[j].nome), 1, fp);
        fwrite(persona[j].indirizzo, sizeof(persona[j].indirizzo), 1, fp);
        fwrite(persona[j].numero, sizeof(persona[j].numero), 1, fp);
    }

    if (fclose(fp) != 0)
    {
        printf("Errore nella chiusura del file.\n");
    }

    return 0;
}