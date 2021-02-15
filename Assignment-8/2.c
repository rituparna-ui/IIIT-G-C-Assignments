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

    int sum = 0;

    for (int i = arrLength; i > 0; i--)
    {
        sum += myArr[i - 1];
    }

    printf("%d", sum);

    return 0;
}