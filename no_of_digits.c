#include <stdio.h>
int main()
{
    long int num;
    int c=0;
    printf("Enter an integer: ");
    scanf("%ld", &num);
    while(num!=0)
    {
        num=num/10;        
        count++;
    }
    printf("Number of digits: %d",c);
}
