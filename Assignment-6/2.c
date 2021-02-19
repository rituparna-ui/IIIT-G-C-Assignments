#include <stdio.h>
int prime(int);

int main()
{
    int num = 12;
    if (prime(num))
    {
        printf("number is prime");
    }
    else
    {
        printf("number is not prime");
    }
    return 0;
}
int prime(int a)
{
    for (int i = 2; i <= a / 2; i++)
    {
        if (a % i == 0)
        {
            return 0;
        }
    }
    return 1;
}