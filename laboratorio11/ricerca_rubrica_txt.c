#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    char nome[10], parola[30], lettera;
    int trovato = 0;

    if ((fp = fopen("Rubrica.txt", "rt")) == NULL)
    {
        printf("Errore nell apertura del file.\n");
    }

    printf("Inserire il nome da cercare.\n");
    scanf("%s", nome);

    while ((fscanf(fp, "%s", parola)) != EOF && !trovato)
    {
        int i = 0;
        char ricerca[30];

        while (parola[i] != '_')
        {
            ricerca[i] = parola[i];
            i++;
        }
        ricerca[i] = '\0';

        if (!strcmp(ricerca, nome))
        {
            trovato = 1;
            printf("%s", parola);

            while (fscanf(fp, "%c", &lettera) != EOF && lettera != '\n')
            {
                printf("%c", lettera);
            }
            printf("\n");
        }
    }

    if (fclose(fp) != 0)
    {
        printf("Errore nella chiusura del file.\n");
    }

    return 0;
}