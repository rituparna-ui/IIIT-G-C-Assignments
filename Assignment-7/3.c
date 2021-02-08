#include <stdio.h>

int main()
{
    int myArr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter element at position %d\n", i);

        scanf("%d", &myArr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", myArr[i]);
    }

    return 0;
}