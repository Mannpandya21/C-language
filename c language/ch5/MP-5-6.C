#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;

	clrscr();

	printf("Enter a=");
	scanf("%d",&a);

	printf("Enter b=");
	scanf("%d",&b);
	printf("Enter c=");
	scanf("%d",&c);

	(a<b)
		?(a<c)
			?printf("A is small")
			:printf("C is small")

		:(b<c)
			?printf("B is small")
			:printf("C is small");

	getch();
}
