#include <stdio.h>

int sum(int a, int b)
{
    if (a > b)
        return 0;
    if (a == b && a % 2 != 0)
        return b;
    if (b % 2 == 0)
        return sum(a, b - 1);
    return b + sum(a, b - 2);
}

int main()
{
    printf("%d", sum(6, 7));
}