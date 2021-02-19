#include <stdio.h>
int sumdigit(int a)
{
    if (a == 0)
        return 0;
    return (a % 10 + sumdigit(a / 10));
}

int main()
{
    int n = 4674;
    printf("%d", sumdigit(n));
}