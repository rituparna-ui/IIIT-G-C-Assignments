#include <stdio.h>

double area(float d)
{
    return 3.14 * d * d / 4;
}
int main()
{
    float d = 2;
    printf("%f", area(d));
    return 0;
}