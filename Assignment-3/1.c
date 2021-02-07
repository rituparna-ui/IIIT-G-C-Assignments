#include <stdio.h>

int main()
{
    int n = 7;         // 0 1 5 7 10 20
    int condition = 0; // 0 1
    if (n == 5)
    {
        printf("%d", __LINE__);
    }
    else if (n % 2 == 0)
    {
        if (n == 10 && condition == 1)
        {
            printf("%d", __LINE__);
        }
        else
        {
            printf("%d", __LINE__);
        }
        printf("%d", __LINE__);
    }
    else if (condition)
    {
        printf("%d", __LINE__);
    }
    else if (0)
    {
        printf("%d", __LINE__);
    }
    else
    {
        printf("%d", __LINE__);
    }

    return 0;
}