#include <stdio.h>

main()
{
    int g, m, a;
    scanf("%d %d %d", &g, &m, &a);
    if (m == 2)
    {
        if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
        {

            if (g < 29)
            {
                g++;
            }
            else
            {
                g = 1;
                m++;
            }
        }
        else
        {
            if (g < 28)
            {
                g++;
            }
            else
            {
                g = 1;
                m++;
            }
        }
    }
    else
    {
        if (m==4 || m==6 || m==9 || m==11)
        {
            if (g<30)
            {
                g++;
            }
            else
            {
                g=1;
                m++;
            }
            
        }
        else
        {
            if (g<31)
            {
                g++;
            }
            else
            {
                g=1;
                m++;
            }
            
        }
        
        
    }
    if (m==13)
    {
        m=1;
        g=1;
        a++;
    }
    
    printf("%d %d %d\n", g, m, a);
}