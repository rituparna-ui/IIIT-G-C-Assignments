#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "NULL";

    printf("Enter String ");
    scanf("%s", &str);
    int count = strlen(str);
    printf("%d\n", count);

    for (int i = 0; i < count; i++)
    {
        printf("%d\n", &str[i]);
    }

    return 0;
}