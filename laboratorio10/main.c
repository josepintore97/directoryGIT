#include <stdio.h>
#include "righe_colonne_caselle.h"
#include "inizializza_mine.h"
#include "mine_adiacenti.h"
#include "rivela.h"
#include "stampa.h"

int main(int argc, char *argv[])
{
    Casella campo[Nrighe][Ncolonne];
    int coordinata_numero;
    char coordinata_lettera;
    int cont_mine = 0;

    inizializza_mine(campo, &cont_mine);

    mine_adiacenti(campo);

    stampa(campo);
    printf("Inserire le coordinate della casella che si vuole scoprire:\n");

    while ((scanf("%d%c", &coordinata_numero, &coordinata_lettera)))
    {
        rivela(coordinata_numero, coordinata_lettera, campo) ? stampa(campo)
                                                             : printf("Inserire le coordinate della casella che si vuole scoprire:\n");
        printf("Inserire le coordinate della casella che si vuole scoprire:\n");
        printf("Totale mine presenti nel campo: %d\n", cont_mine);
    }

    return 0;
}