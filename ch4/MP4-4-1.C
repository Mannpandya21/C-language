#include<stdio.h>
#include<conio.h>
main()
{
	int p,r,n;
	float a;

	clrscr();

	printf("Enter P=");
	scanf("%d",&p);

	printf("Enter r=");
	scanf("%d",&r);

	printf("Enter n=");
	scanf("%d",&n);

	a=(p*r*n)/100;

	printf("Simple Intrest=%.2f",a);

	getch();
}