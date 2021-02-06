#include <stdio.h>

int main()
{
    int year;
    year = 3000;
    printf("%c", (year % 400) ? ((year % 100) ? ((year % 4) ? 'N' : 'Y') : 'N') : 'Y');

    return 0;
}