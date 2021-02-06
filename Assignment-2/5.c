#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, s;
    s = (a + b + c) / 2;
    float x = s * (s - a) * (s - b) * (s - c);
    float area = pow(x, 0.5);
    printf("%g", area);

    return 0;
}