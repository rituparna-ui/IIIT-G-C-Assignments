#include <stdio.h>

int mod(int x)
{
    if (x < 0)
    {
        return -1 * x;
    }
    else
        return x;
}
int main()
{
    printf("%d", mod(77));
}