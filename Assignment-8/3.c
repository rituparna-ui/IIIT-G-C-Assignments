#include <stdio.h>

int main()
{
    int n;

    printf("Enter length of array\n");
    scanf("%d", &n);
    printf("Enter the %d elements\n", n);

    int myArr[n];
    int min = myArr[0];
    int location = 1;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &myArr[i]);
    }

    int arrLength = sizeof(myArr) / sizeof(myArr[0]);

    for (int i = 0; i < arrLength; i++)
    {
        if (myArr[i] < min)
        {
            min = myArr[i];
            location = i + 1;
        }
    }

    printf("%d is minimum at %d", min, location);

    return 0;
}