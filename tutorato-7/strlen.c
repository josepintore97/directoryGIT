#include <stdio.h>

int main()
{
    char a[20];
    int i = 0;

    scanf("%s", a);

    while (a[i] != 0)
    {
        i++;
    }

    printf("La lunghezza della stringa inserita e: %d\n", i);

    return 0;
}