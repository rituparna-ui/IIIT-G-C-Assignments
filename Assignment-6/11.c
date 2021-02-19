#include <stdio.h>
int power(int x)
{
    int b = 1;
    while (x > b)
    {
        b *= 2;
    }
    return b;
}
int main()
{
    printf("%d", power(44));
    return 0;
}