#include <stdio.h>

int main()
{
    int a = 10, b = 10, c = 10;
    int eq1 = (a + b) > c;
    int eq2 = (a + c) > b;
    int eq3 = (b + c) > a;
    if (eq1 && eq2 && eq3)
    {
        if (a == b && a == c && b == c)
        {
            printf("Equilateral");
        }
        else if (a == b || a == c || b == c)
        {
            printf("Isocsceles");
        }
        else
        {
            printf("Scalene");
        }
    }
    else
    {
        printf("Invalid Triangle");
    }
    return 0;
}