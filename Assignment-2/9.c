#include <stdio.h>

int main()
{
    float circumference, radius, area;
    circumference = 7;
    radius = circumference / (2 * 3.14);
    area = 3.14 * radius * radius;
    printf("%g", area);

    return 0;
}