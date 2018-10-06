/*menu driven program of:
   -factorial of a number
   -prime number
   -even and odd
   -sum of digits of a number
   -power of a number
   -armstrong number*/
#include <stdio.h>
#include <conio.h>
void fac();
void primeno();
void evenodd();
void sumofdigits();
void pownum();
void armstrongno();
void main()
{
	clrscr();
	int a;
	printf("MENU");
	printf("\n\n1. Factorial \n2.Prime Number \n3.Even and Odd \n4. Sum of Digits \n5. Power of a number \n6. Armstrong Number \n7. Exit \n\nEnter Option : ");
	scanf("%d",&a);
	switch(a)
	{
		case 1: fac();
				break;
		case 2: primeno();
				break;
		case 3: evenodd();
				break;
		case 4:	sumofdigits();
				break;
		case 5: pownum();
				break;
		case 6: armstrongno();
				break;
	}
	getch();
}
void fac()
{
	clrscr();
	int i, n, fac=1;
	printf("\nFACTORIAL OF A NUMBER \n\nEnter number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fac=fac*i;
	}
	printf("\n\nFactorial of %d is : %d",n,fac);
	getch();
}
void primeno()
{
		clrscr();
		int n, i,f=0;
		printf("\nPRIME NUMBER DETERMINATION \n\nEnter number : ");
		scanf("%d",&n);
		for(i=2;i<=n/2;++i)
		{
			if(n%i==0)
			{
				f=1;
				break;
			}
		}
		if(n==1)
			printf("\n1 is niether prime nor composite");
		else
		{
			if(f==0)

				printf("%d is a prime number",n);
			else
				printf("%d is not a prime number",n);
		}
		getch();
}
void evenodd()
{
	clrscr();
	int n;
	printf("\nODD EVEN DETECTION \n\nEnter number: ");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("\n\n");
		printf("%d is an even number",n);
	}
	else
		printf("%d is an odd number",n);
}
void sumofdigits()
{
	clrscr();
	int n, t, r, sum=0;
	printf("\nSUM OF DIGITS \n\n Enter number: ");
	scanf("%d",&n);
	t=n;
	while(t>0)
	{
		r=t%10;
		sum=sum+r;
		t=t/10;
	}
	printf("\n\nSum of digits of %d = %d",n,sum);
	getch();
}
void pownum()
{
	clrscr();
	int x,y,i,pow=1;
	printf("\nPOWER OF A NUMBER \n\nEnter number : ");
	scanf("%d",&x);
	printf("\n\nEnter Power : ");
	scanf("%d",&y);
	for(i=1;i<=y;i++)
	{
		pow=pow*x;	
	}
	printf("\nPower of %d^%d = %d",x,y,pow);
	getch();
}
void armstrongno()
{
		clrscr();
		int n1, on, r1, result=0;
		printf("\nARMSTRONG NUMBER DETECTION \n\nEnter number :");
		scanf("%d",&n1);
		on=n1;
		while(on>0)
		{
			r1=on%10;
			result=result+(r1*r1*r1);
			on=on/10;
		}
		if(result==n1)
			printf("\n%d is an Armstrong Number",n1);
		else
			printf("\n%d is not an Armstrong number",n1);
		getch();
}

