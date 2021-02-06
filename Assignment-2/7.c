#include <stdio.h>

int main()
{
    float final, p, r, time, n;
    p = 100;
    r = 12.5;
    time = 10;
    n = 1;
    final = p * pow((1 + (r / n)), n * time);
    printf("%g", final);

    return 0;
}