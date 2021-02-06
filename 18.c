#include <stdio.h>

int main()
{
    int n = 10001;
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
    int revNum = a * 10000 + b * 1000 + c * 100 + d * 10 + e;
    printf("%d", revNum);

    return 0;
}