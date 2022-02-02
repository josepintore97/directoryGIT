#include <stdio.h>
#include <stdlib.h>
#include "righe_colonne_caselle.h"
#include "stampa.h"

int rivela(int coordinata_numero, char coordinata_lettera, Casella c[Nrighe][Ncolonne])
{

    if ((coordinata_numero <= Nrighe && coordinata_numero > 0) && (coordinata_lettera >= 'a' && coordinata_lettera < 'a' + Ncolonne))
    {
        c[Nrighe - coordinata_numero][coordinata_lettera - 'a'].coperta = 0;
        if (c[Nrighe - coordinata_numero][coordinata_lettera - 'a'].minata == -1)
        {
            stampa(c);
            printf("Game Over.\n");
            exit(1);
        }

        return 1;
    }
    else
    {
        printf("Coordinata inserite non valide.\n");
        return 0;
    }
}