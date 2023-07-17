#include<stdio.h>
#include<conio.h>
main()
{
	int n;

	clrscr();

	printf("Enter n=");
	scanf("%d",&n);

	if(n==3)
	{
		printf("minimum");
	}
	else if(n==8)
	{
		printf("maximum");
	}

	getch();

}