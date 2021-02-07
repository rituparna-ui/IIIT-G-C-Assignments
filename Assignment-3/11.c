#include <stdio.h>

int main()
{
    int month;
    if (month <= 12)
    {
        if (month == 2)
        {
            printf("28 or 29");
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11)
        {
            printf("30");
        }
        else
        {
            printf("31");
        }
    }
    else
    {
        printf("Enter valid month");
    }

    return 0;
}