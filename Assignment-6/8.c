#include <stdio.h>

int minF(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}

int main()
{
    // printf("xD");

    printf("%d\n", minF(4, 7));
}