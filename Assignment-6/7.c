#include <stdio.h>
int perfect(unsigned int a, unsigned int b)
{
    for (int i = a; i < b; i++)
    {
        int sum = 0;
        for (int n = 1; n < i; n++)
        {

            if (i % n == 0)
            {
                sum += n;
            }
        }
        if (sum == i)
        {
            printf("perfect number \n");
        }
    }
}
int main()
{
    perfect(20, 90);

    return 0;
}