#include <stdio.h>

int main()
{
    // A-Z == 65-90
    // a-z == 97-122
    char c;
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
    {
        if (c == 65 || c == 69 || c == 73 || c == 79 || c == 85 || c == 97 || c == 101 || c == 105 || c == 111 || c == 117)
        {
            printf("Vovel");
        }
        else
        {
            printf("Consonant");
        }
    }
    else
    {
        printf("No english character");
    }

    return 0;
}