#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	float x,a,b,c;

	clrscr();

	printf("\n\tEnter Units=");
	scanf("%d",&n);

	if(n>=1 && n<=50)
	{
		x=n*0.5;
		printf("\n\telectricity bill=%f",(x*0.2)+x);
	}
	else if(n>=51 && n<=150)
	{
		a=((n-50)*0.75)+25;
		printf("\n\telectricity bill=%f",(a*0.2)+a);
	}
	else if(n>=151 && n<=250)
	{
		b=((n-150)*1.2)+100;
		printf("\n\telectricity bill=%f",(b*0.2)+b);
	}
	else if(n>250)
	{
		c=((n-250)*1.5)+220;
		printf("\n\telectricity bill=%f",(c*0.2)+c);
	}
	else
	{
		printf("\n\n\t Invalid Input!!");
	}

	getch();
}


