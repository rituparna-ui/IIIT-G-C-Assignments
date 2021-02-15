#include <stdio.h>

int main()
{
    int n;

    printf("Enter length of array\n");
    scanf("%d", &n);
    printf("Enter the %d elements\n", n);

    int myArr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &myArr[i]);
    }

    int arrLength = sizeof(myArr) / sizeof(myArr[0]);
    // printf("%d", arrLength);

    for (int i = arrLength; i > 0; i--)
    {
        printf("%d, ", myArr[i - 1]);
    }

    return 0;
}