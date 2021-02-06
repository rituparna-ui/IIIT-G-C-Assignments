#include <stdio.h>

int main()
{
    int a;
    a = 11;
    printf("%c", (a % 2) ? 'O' : 'E');

    return 0;
}