#include <stdio.h>

int calcolo_regioni(int rette)
{
    if (rette == 0)
    {
        return 1;
    }
    else
    {
        return rette + calcolo_regioni(rette - 1);
    }
}

int main()
{
    int rette, regioni;

    scanf("%d", &rette);

    regioni = calcolo_regioni(rette);

    printf("%d\n", regioni);

    return 0;
}