#include <stdio.h>

int main()
{
    // A-Z == 65-90
    // a-z == 97-122
    char c;
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
    {
        printf("yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}