#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;

	clrscr();

	printf("Enter x=");
	scanf("%d",&x);

	printf("Enter y=");
	scanf("%d",&y);

	printf("(x+y)^3 = %d",x*y-y*y-2*x*y);

	getch();
}