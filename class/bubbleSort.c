#include <stdio.h>

int main()
{
    int arr[7] = {1, 3, 4, 2, 9, 8, 5};

    int arrLen = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < arrLen; i++)
    {
        for (int i = 0; i < arrLen; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for (int i = 0; i < arrLen; i++)
    {
        printf("%d, ", arr[i]);
    }

    return 0;
}