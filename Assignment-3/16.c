#include <stdio.h>

int main()
{
    float basic, hra, da, gross;
    if (basic <= 30000 && basic >= 0)
    {
        hra = 0.2;
        da = 0.3;
    }
    else if (basic <= 60000 && basic > 30000)
    {
        hra = 0.25;
        da = 0.35;
    }
    else if (basic >= 60000)
    {
        hra = 0.3;
        da = 0.4;
    }
    else
    {
        hra = 0;
        da = 0;
    };
    gross = basic + basic(hra + da);
    printf("%g",gross);
    
    return 0;
}