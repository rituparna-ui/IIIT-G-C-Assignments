#include <stdio.h>

int main()
{
    int a[5] = {12, 4, 362, 65, 23};
    int isPresent = 0, index = 0;
    int x = 10;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] == x)
        {
            isPresent = 1;
            index = i;
            break;
        }
    }

    if (isPresent)
    {
        printf("%d is present at index %d and location %d", x, index, index + 1);
    }
    else
    {
        printf("%d is not present in the array", x);
    }

    return 0;
}