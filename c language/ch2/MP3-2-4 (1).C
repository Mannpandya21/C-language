#include<stdio.h>
#include<conio.h>
main()
{
	float l,b,ans;

	clrscr();

	printf("Enter l=");
	scanf("%f",&l);
	printf("Enter b=");
	scanf("%f",&b);

	ans=l*b;
	printf("Area of rectangle=%f\n\n",ans);

	getch();
}