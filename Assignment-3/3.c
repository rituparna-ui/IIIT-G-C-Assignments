#include <stdio.h>

int main()
{
    int num;
    if (num % 7 == 0)
    {
        printf("7\n");
    }
    else if (num % 13 == 0)
    {
        printf("13\n");
    }
    else if (num % 7 == 0 && num % 13 == 0)
    {
        printf("Both");
    }
    else
    {
        printf("none");
    }

    return 0;
}