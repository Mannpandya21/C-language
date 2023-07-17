#include<stdio.h>
#include<conio.h>
main()
{
	int a;

	clrscr();

	printf("Enter a=");
	scanf("%d",&a);

	(a%2==1)
		?printf("This number is odd\n\n")
		:printf("This number is even\n\n");

	getch();
}