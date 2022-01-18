#include <stdio.h>

typedef struct
{
    int giorno, anno;
    char mese[10];
} data;

typedef struct
{
    char nome[20];
    data nascita;
} persona;

int main()
{
    data oggi;
    persona p;

    scanf("%d%s%d", &oggi.giorno, oggi.mese, &oggi.anno);
    scanf("%s", p.nome);
    scanf("%d%s%d", &p.nascita.giorno, p.nascita.mese, &p.nascita.anno);

    if (p.nascita.giorno == oggi.giorno && p.nascita.mese == oggi.mese)
    {
        printf("AUGURI %s\n", p.nome);
    }

    return 0;
}