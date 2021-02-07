#include <stdio.h>

int main()
{
    int a, b, c;
    int eq1 = (a + b) > c;
    int eq2 = (a + c) > b;
    int eq3 = (b + c) > a;
    if (eq1 && eq2 && eq3)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }

    return 0;
}