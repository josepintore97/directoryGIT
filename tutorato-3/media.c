#include <stdio.h>

int main()
{

    int a;
    float media = 0;
    int c = 0;

    do
    {
        c++;

        scanf("%d", &a);

        media = media + a;
    } while (a != 0);

    printf("La media e : %.2f\n", media / (c - 1)); //-1 per non tener conto dell inserimento dell ultima cifra che e 0

    return 0;
}