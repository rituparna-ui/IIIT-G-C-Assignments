#include <stdio.h>
int number(int, int);
int main()
{
    number(101, 999);
    return 0;
}

int number(int a, int b)
{
    for (int n = a; n <= b; n++)
    {
        int tmp = n, sum = 0;

        while (tmp)
        {
            int b = tmp % 10;
            int fact = 1;
            for (int i = 1; i <= b; i++)
            {
                fact *= i;
            }
            sum += fact;
            tmp /= 10;
        }
        if (sum == n)
        {
            printf("%d is strong number \n", n);
        }
    }
}
