#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	int c=180-(a+b);

	clrscr();

	printf("Enter a=");
	scanf("%d",&a);
	printf("Enter b=");
	scanf("%d",&b);

	c=180-(a+b);

	printf("third angle =%d\n",c);

	getch();
}