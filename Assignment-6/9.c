#include <stdio.h>
int maxF(int a, int b)
{
    if (a < b)
        return b;
    else
        return a;
}
int main()
{
    printf("%d", maxF(5, 7));
}