#include <stdio.h>
int prime(int a)
{
    for (int i = 2; i <= a / 2; i++)
    {
        if (a % i == 0)
        {
            return 0;
            break;
        }
        else if (i > a / 2)
        {
            return 1;
            break;
        }
    }
}

int allPrime(int a, int b)
{
    for (int i = a; i <= b; i++)
    {
        int x = prime(i);
        if (x)
        {
            printf("%d, ", i);
        }
    }
}

int main()
{
    // int n = 11;
    int a = 2, b = 10;
    allPrime(a, b);
    // printf("%d",prime(4));

    return 0;
}