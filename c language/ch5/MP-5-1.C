#include<stdio.h>
#include<conio.h>
main()
{
	int n;

	clrscr();

	printf("Enter number=");
	scanf("%d",&n);

	if(n<0)
	{
		printf("negative number");
	}
	else if(n==0)
	{
		printf("Neutral number");
	}
	else
	{
		printf("Positive number");
	}

	getch();
}