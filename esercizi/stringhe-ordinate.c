#include <stdio.h>

int main()
{
    char a[40];
    int i = 0;


    scanf("%s", a);

    while (a[i])
    {
        i++;
    }

    printf("La frase e lunga %d caratteri\n", i);

    return 0;
}