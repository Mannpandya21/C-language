#include<stdio.h>
#include<conio.h>
main()
{
	int n;

	clrscr();

	printf("Enter marks=");
	scanf("%d",&n);

	if(n>91 && n<100)
	{
		printf("A1");
	}
	else if(n>81 && n<90)
	{
		printf("A2");
	}
	else if(n>71 && n<80)
	{
		printf("B1");
	}
	else if(n>61 && n<70)
	{
		printf("B2");
	}
	else if(n>51 && n<60)
	{
		printf("C1");
	}
	else if(n>41 && n<50)
	{
		printf("C2");
	}
	else if(n>33 && n<40)
	{
		printf("D1");
	}
	else
	{
		printf("Fail");
	}

	getch();
}