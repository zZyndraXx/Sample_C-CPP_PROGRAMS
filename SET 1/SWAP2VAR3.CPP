//swap 2 numbers using 3 variables
#include <stdio.h>
void main()
{
	clrscr();
	int a, b, c;
	printf("Enter number 1: ");
	scanf("%d",&a);
	printf("\Enter number 2: ");
	scanf("%d",&b);
	printf("\nNumber 1 : %d \nNumber2 : %d ",a,b);
	c=a;
	a=b;
	b=c;
	printf(" \n\n\n New numbers: \n\n Number 1: %d \n Number 2: %d",a,b);
	getch();
}

