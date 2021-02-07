#include <stdio.h>

int main()
{
    char c;
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
    {
        printf("English Letter");
    }
    else if ((c >= 48 && c <= 57))
    {
        printf("Digit");
    }
    else
    {
        printf("Something Else");
    }

    return 0;
}