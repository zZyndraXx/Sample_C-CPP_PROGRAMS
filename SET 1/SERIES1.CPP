//sum of series 1+2+3+....+n
#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	int i,n,sum=0;
	printf("\nEnter limit n = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("\n\n Sum : %d",sum);
	getch();
}


