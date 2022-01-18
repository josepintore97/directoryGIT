#include <stdio.h>

int main()
{

    char tipo;
    float a;

    printf("Si desidera fare una conversione di massa (M) o di lunghezza (L)?\nAltro carattere per terminare.\n");
    scanf("%c", &tipo);

    while (tipo == 'M' || tipo == 'L')
    {
        printf("Inserire un intero di cui si vuole eseguire la conversione.\n");
        scanf("%f", &a);

        if (tipo == 'M')
        {
            a = a * 2.205;
            printf("Il valore in Libbre e: %.2f\n", a);
        }
        if (tipo == 'L')
        {
            a = a / 1.6;
            printf("Il valore in Miglia e: %.2f\n", a);
        }

        printf("Si desidera fare una conversione di massa (M) o di lunghezza (L)?\nAltro carattere per terminare.\n");
        scanf(" %c", &tipo);
    }

    return 0;
}