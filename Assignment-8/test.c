#include <stdio.h>

int main()
{
    int x = 1, y = 0, z = 5;
    int a = x && y && z++;
    printf("%d\n", z);
    unsigned int p = -23;
    printf("%d", p);

    return 0;
}