#include <stdio.h>

int main()
{
    char myChar = 'C';
    unsigned char myUnsignedChar = 'C';
    signed char mySignedChar = 'C';
    int myInt = -1 * 'C';
    unsigned int myUnsignedInt = 0x5E;
    short myShort = -1 * 'C';
    unsigned short myUnsignedShort = 010;
    long myLong = -1000000;
    unsigned long myUnsignedLong = 100000;
    float myFloat = 0.325;
    double myDouble = 1.5e-3;
    long double myLongDouble = 3.2e30;

    printf("myChar %ld\n", sizeof(myChar));
    printf("myUnsignedChar %ld\n", sizeof(myUnsignedChar));
    printf("mySignedChar %ld\n", sizeof(mySignedChar));
    printf("myInt %ld\n", sizeof(myInt));
    printf("myUnsignedInt %ld\n", sizeof(myUnsignedInt));
    printf("myShort %ld\n", sizeof(myShort));
    printf("myUnsignedShort %ld\n", sizeof(myUnsignedShort));
    printf("myLong %ld\n", sizeof(myLong));
    printf("myUnsignedLong %ld\n", sizeof(myUnsignedLong));
    printf("myFloat %ld\n", sizeof(myFloat));
    printf("myDouble %ld\n", sizeof(myDouble));
    printf("myLongDouble %ld\n", sizeof(myLongDouble));

    return 0;
}