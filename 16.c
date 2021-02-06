#include <stdio.h>

int main()
{
    int n = 12345;
    int op = n;
    int a, b, c, d, e;
    a = n % 10;
    n /= 10;
    b = n % 10;
    n /= 10;
    c = n % 10;
    n /= 10;
    d = n % 10;
    n /= 10;
    e = n % 10;
    n /= 10;
    int sum = a + b + c + d + e;
    printf("%d", sum);

    return 0;
}