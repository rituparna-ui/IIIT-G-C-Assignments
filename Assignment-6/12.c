#include <stdio.h>

int lead(int a)
{
    int r = 0;
    while (a)
    {
        r = a;
        a /= 10;
    }
    return r;
}

int main()
{
    printf("%d", lead(723));
}