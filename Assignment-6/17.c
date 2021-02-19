#include <stdio.h>
int sumEven(int a, int b)
{
    if (a > b)
        return 0;
    if (a == b && a % 2 == 0)
        return b;
    if (b % 2 == 1)
        return sumEven(a, b - 1);
    return b + sumEven(a, b - 2);
}
int main()
{
    printf("%d", sumEven(6, 8));
    return 0;
}