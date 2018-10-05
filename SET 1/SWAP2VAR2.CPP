//swap 2 numbers using 2 variables
#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	int a,b;
	printf("\nEnter number 1: ");
	scanf("%d",&a);
	printf("\nEnter number 2: ");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n\nNew Numbers \nNumber 1: %d \nNumber2: %d",a,b);
	getch();
}