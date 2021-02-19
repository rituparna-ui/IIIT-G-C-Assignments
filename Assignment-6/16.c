#include <stdio.h>

int powr(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    else
        return a * powr(a, b - 1);
}
int main()
{
    printf("%d", powr(5, 3));
}