#include <stdio.h>

void divisione(int a, int b, int *quoziente, int *resto)
{

    //b != 0 ? *quoziente = a / b, *resto = a % b : *quoziente = 0, *resto = 0;

    if (b != 0)
    {
        *quoziente = a / b;
        *resto = a % b;
    }
    else
    {
        *quoziente = 0;
        *resto = 0;
    }
}

int main()
{
    int a, b;
    int quoziente, resto;

    scanf("%d %d", &a, &b);

    divisione(a, b, &quoziente, &resto);

    printf("%d %d\n", quoziente, resto);

    return 0;
}