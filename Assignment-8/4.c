#include <stdio.h>

int main()
{
    int n;
    printf("Enter length of array 1\n");
    scanf("%d", &n);
    printf("Enter the %d elements\n", n);
    int myArr1[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &myArr1[i]);
    }

    int newArr[n];

    for (int i = 0; i < n; i++)
    {
        newArr[i] = myArr1[i];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d, ", newArr[i]);
    }

    return 0;
}