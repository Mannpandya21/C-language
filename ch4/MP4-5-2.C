#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d;

	clrscr();

	printf("Enter a=");
	scanf("%d",&a);

	printf("Enter b=");
	scanf("%d",&b);

	printf("Enter c=");
	scanf("%d",&c);

	printf("Enter d=");
	scanf("%d",&d);

	if(a>b)
	{
		if(a>c)
		{
			printf("a is maximum");
		}
		else
		{
			printf("c is maximum");
		}
	}
	else

	getch();
}
