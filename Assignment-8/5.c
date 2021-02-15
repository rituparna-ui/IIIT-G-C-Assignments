#include <stdio.h>

int main()
{
    int n;
    int duplicates = 0;

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
        for (int j = i + 1; j < n; j++)
        {
            if (myArr[i] == myArr[j])
            {
                duplicates++;
            }
        }
    }

    printf("Number of duplicates = %d", duplicates);

    return 0;
}