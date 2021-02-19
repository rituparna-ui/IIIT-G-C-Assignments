#include <stdio.h>

int sum(int a)
{
    if (a == 0)
    {
        return 0;
    }
    return a + sum(a - 1);
}
int main()
{
    int n = 5;
    printf("sum is %d", sum(5));
}