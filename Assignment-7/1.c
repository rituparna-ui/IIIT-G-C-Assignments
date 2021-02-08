#include <stdio.h>

int main()
{
    char a;
    int b;
    float c;
    double d;
    printf("Enter char\n");
    scanf("%c", &a);
    printf("Enter int\n");
    scanf("%d", &b);
    printf("Enter float\n");
    scanf("%f", &c);
    printf("Enter double\n");
    scanf("%lf", &d);

    printf("%c %d %f %f", a, b, c, d);

    return 0;
}