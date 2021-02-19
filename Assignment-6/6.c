#include <stdio.h>
int number(int a, int b)
{
    for (int n = a; n <= b; n++)
    {
        int c = n;
        int sum = 0;

        while (c)
        {
            int rem = c % 10;

            sum += rem * rem * rem;

            c /= 10;
        }
        if (sum == n)
        {
            printf(" %d is an arm no.\n", n);
        }
    }
}
int main()
{
    number(100, 999);
    return 0;
}
