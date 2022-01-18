#include <stdio.h>

int main()
{
    struct orario
    {
        int ore, minuti;
    } o1, o2, differenza;

    scanf("%d %d", &o1.ore, &o1.minuti);
    scanf("%d %d", &o2.ore, &o2.minuti);

    differenza.minuti = o2.minuti - o1.minuti;

    if (differenza.minuti < 0)
    {
        differenza.minuti = differenza.minuti + 60;
        o2.ore--;
    }

    differenza.ore = o2.ore - o1.ore;

    printf("%d %d\n", differenza.ore, differenza.minuti);

    return 0;
}