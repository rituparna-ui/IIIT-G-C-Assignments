#include <stdio.h>

int main()
{
    int num;
    num = 273;
    if ((num % 7 == 0 || num % 13 == 0) && (num % 91 != 0))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}