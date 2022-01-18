#include <stdio.h>

main()
{
    char c;
    scanf("%c", &c);
    //printf("%d\n",c);
    switch (c)
    {
    case 65 ... 90:
        printf("Maiuscola\n");
        break;
    case 97 ... 122:
        printf("Minuscola\n");
        break;
    case 48 ... 57:
        printf("Numero\n");
        break;
    }
}