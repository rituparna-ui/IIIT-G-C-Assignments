#include <stdio.h>

int main()
{
    int a[5] = {11, 15, 12, 65, 21};
    for (int i = 0; i < 5; i++)
    {
        int minIndex = i;
        for (int j = 0; j < i + 1; j++)
        {
            if (a[minIndex] > a[j])
            {
                minIndex = j;
            }
            int temp = a[i];
            a[i] = a[minIndex];
            a[minIndex] = temp;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}