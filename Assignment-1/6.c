#include <stdio.h>

int main()
{
    int a = 7, b = 5, c = 0, d = 5, result = 0;

    result = a + b;
    printf("%d\n", result);
    result = 0;

    result = a - b;
    printf("%d\n", result);
    result = 0;

    result = a / b;
    printf("%d\n", result);
    result = 0;

    result = a * b;
    printf("%d\n", result);
    result = 0;

    result = a % b;
    printf("%d\n", result);
    result = 0;

    result++;
    printf("%d\n", result);

    result--;
    printf("%d\n", result);

    ++result;
    printf("%d\n", result);

    --result;
    printf("%d\n", result);

    result = (a == b);
    printf("%d\n", result);

    result = (a != b);
    printf("%d\n", result);

    result = (a < b);
    printf("%d\n", result);

    result = (a <= b);
    printf("%d\n", result);

    result = (d > b);
    printf("%d\n", result);

    result = (d >= b);
    printf("%d\n", result);

    result = (c && d);
    printf("%d\n", result);

    result = (c || d);
    printf("%d\n", result);

    result = (a & b);
    printf("%d\n", result);

    result = (a && b);
    printf("%d\n", result);

    result = (a | b);
    printf("%d\n", result);

    result = (a || b);
    printf("%d\n", result);

    result = (a ^ b);
    printf("%d\n", result);

    result = (a << 2);
    printf("%d\n", result);

    result = (a >> 2);
    printf("%d\n", result);

    result = 0;
    result += a;
    printf("%d\n", result);

    result = 0;
    result -= a;
    printf("%d\n", result);

    result = 0;
    result *= a;
    printf("%d\n", result);

    result = 0;
    result /= a;
    printf("%d\n", result);

    result = 0;
    result >>= 2;
    printf("%d\n", result);

    result = 0;
    result <<= 2;
    printf("%d\n", result);

    result = 0;
    result &= 2;
    printf("%d\n", result);

    result = 0;
    result |= 2;
    printf("%d\n", result);

    result = 0;
    result = (a < b) ? c : d;
    printf("%d\n", result);

    result = 0;
    result = (a > b) ? c : d;
    printf("%d\n", result);

    return 0;
}