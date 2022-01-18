#include <stdio.h>

typedef enum
{
    lun,
    mar,
    mer,
    gio,
    ven,
    sav,
    dom
} Giorni;

int main()
{
    Giorni g;
    g = gio;

    if (g == mer)
    {
        printf("ABC\n");
    }

    return 0;
}