#include <stdio.h>

char toUpperCase(char c)
{

    if (c >= 97 && c <= 122)
    {
        return c - 32;
    }
    else
    {
        return c;
    }
}

int main()
{
    char c;

    do
    {
        scanf("%c", &c);
        printf("%c", toUpperCase(c));

    } while (c != '\n');

    return 0;
}