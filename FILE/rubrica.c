#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp;
    char nome[10];
    char ricerca[50], parola;

    if ((fp = fopen("rubrica.txt", "r")) == NULL)
    {
        printf("Errore nell apertura del file.\n");
        exit(1);
    }

    printf("Inserire il nome da cercare in rubrica.\n");
    scanf("%s", nome);

    while ((fscanf(fp, "%s", ricerca)) != EOF)
    {
        if (strcmp(nome, ricerca) == 0)
        {
            printf("%s", nome);

            do
            {
                fscanf(fp, "%c", &parola);
                printf("%c", parola);
            } while (parola != '\n');
        }
    }

    if (fclose(fp) != 0)
    {
        printf("Errore nella chiusura del file.\n");
        exit(2);
    }

    return 0;
}