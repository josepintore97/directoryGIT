#include <stdio.h>

int rimuoviDuplicati(char *p1, char *p2)
{
    int i = 0;
    int c = 0;

    while (p2[i] != '\0')
    {
        int j = 0;

        while (p1[j] != '\0')
        {
            if (p1[j] == p2[i])
            {
                int cont = j;

                while (p1[cont] != '\0')
                {
                    p1[cont] = p1[cont + 1];
                    cont++;
                }

                c++;
            }

            j++;
        }

        i++;
    }

    return c;
}

int main()
{
    char x[100], y[100];
    int caratteri_eliminati;

    printf("Inserire una parola:\n");
    scanf("%s", x);

    printf("Inserire le lettere che si volgio eliminare dalla parola inserita (senza spazi).\n");
    scanf("%s", y);

    caratteri_eliminati = rimuoviDuplicati(x, y);

    printf("%s\nCaratteri eliminati : %d\n", x, caratteri_eliminati);

    return 0;
}