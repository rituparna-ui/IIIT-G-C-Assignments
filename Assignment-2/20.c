#include <stdio.h>

int main()
{
    int a, b, tmp;
    a = 10;
    b = 15;
    printf("a=%d b=%d", a, b);
    
    tmp = a;
    a = b;
    b = tmp;

    printf("a=%d b=%d", a, b);

    return 0;
}