#include <stdio.h>

int main()
{
    int n;
    int odds = 0;

    printf("Enter length of array\n");
    scanf("%d", &n);
    printf("Enter the %d elements\n", n);

    int myArr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &myArr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (myArr[i] % 2 == 1)
        {
            odds++;
        }
    }

    printf("Number of odds = %d", odds);

    return 0;
}