#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char nome_file[50];
    char c;

    printf("Quale file apro?\n");
    scanf("%s", nome_file);

    if ((fp = fopen(nome_file, "rt")) == NULL)
    {
        printf("Errore nell apertura del file %s\n", nome_file);
        exit(1);
    }

    while ((c = fgetc(fp)) != EOF)
    {
        putchar(c);
    }

    printf("\n");

    if (fclose(fp) != 0)
    {
        printf("Errore nella chiusura del file %s\n", nome_file);
        exit(2);
    }

    return 0;
}