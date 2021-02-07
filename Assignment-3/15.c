#include <stdio.h>

int main()
{
    int a, b, c;
    int num = 153;
    int test = num;

    a = num % 10;
    num /= 10;
    b = num % 10;
    num /= 10;
    c = num % 10;
    num /= 10;

    int arm = a * a * a + b * b * b + c * c * c;
    if (arm == test)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}