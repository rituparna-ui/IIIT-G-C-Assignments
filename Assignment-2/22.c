#include <stdio.h>

int main()
{
    int a, b, max;
    a = 10;
    b = 15;

    max = (a > b) ? a : b;

    printf("%d", max);

    return 0;
}