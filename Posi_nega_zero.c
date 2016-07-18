#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	clrscr();
	scanf("%d",num);
	if(num==0)
	printf("Zero");
	if(num>0)
	printf("Positive");
	if(num<0)
	printf("Negative");
	getch();
}
