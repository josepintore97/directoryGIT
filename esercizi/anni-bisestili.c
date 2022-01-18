#include <stdio.h>

main()
{
    int n;

    scanf("%d", &n);
    if (!(n % 4) /*== 0*/ && n % 100 /*!= 0*/ || !(n % 400) /*== 0*/) //le condizioni scritte cosi hanno lo stesso valore dei quello tra //. Ma e un erro re perche sono meno leggibili.
    {
        printf("Bisestile.\n");
    }
}