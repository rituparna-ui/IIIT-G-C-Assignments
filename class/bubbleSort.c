#include <stdio.h>

int main()
{
    int arr[9] = {5, 8, 1, 9, 2, 5, 1, 3, 9};

    int arrLen = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < arrLen; i++)
    {
        for (int i = 0; i < arrLen - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }

    for (int i = 0; i < arrLen; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}