#include <stdio.h>
#include <stdlib.h>

void ricopia(FILE *fp_out, char file_in[])
{
    FILE *fp_in;
    char parola[21];

    if ((fp_in = fopen(file_in, "rt")) == NULL)
    {
        printf("Errore nell apertura del file.\n");
        exit(1);
    }

    while ((fscanf(fp_in, "%s", parola)) != EOF)
    {
        fprintf(fp_out, "%s ", parola);
    }

    fscanf(fp_in, "%s", parola);

    if ((fclose(fp_in)) != 0)
    {
        printf("Errore nella chiusura del file.\n");
        exit(2);
    }
}