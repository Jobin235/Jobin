#include <stdio.h>
int main()
{
    int b, e;
    double result = 1;
    printf("Enter a base number: ");
    scanf("%d", &b);
    printf("Enter an exponent: ");
    scanf("%d", &e);
    while (e != 0)
    {
        result *= b;
        --e;
    }
    printf("Answer = %lf", result);
    return 0;
}
