#include <stdio.h>

#include <math.h>

int arm(int a)
{
    int sum = 0, c = a;
    while (a)
    {
        sum += pow(a % 10, 3);
        a /= 10;
    }
    if (sum == c)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n = 407, d = arm(n);
    if (d)
    {
        printf("YEmS");
    }

    else
    {
        printf("Noo");
    }
}
