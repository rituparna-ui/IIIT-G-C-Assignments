#include <stdio.h>

int main()
{
    int a, b;
    a = 10;
    b = 12;
    if (a > b)
    {
        printf("A is greater");
    }
    else if (b > a)
    {
        printf("B is greater");
    }
    else
    {
        printf("Equal");
    }

    return 0;
}