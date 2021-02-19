#include <stdio.h>

int numDigit(unsigned int a)
{
    if (a == 0)
        return 0;
    return 1 + numDigit(a / 10);
}

int main()
{
    unsigned int n = 4674;
    printf("%d", numDigit(n));
}