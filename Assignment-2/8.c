#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    a = 1;
    b = 2;
    c = 1;
    float D = (b * b) - 4 * a * c;
    if (D >= 0)
    {
        float r1, r2;
        r1 = (-b - pow(D, 0.5)) / 2;

        r2 = (-b + pow(D, 0.5)) / 2;
        printf("%g\t%g", r1, r2);
    }
    else
    {
        printf("Imaginery Roots");
    }

    return 0;
}