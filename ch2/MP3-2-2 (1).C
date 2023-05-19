#include<stdio.h>
#include<conio.h>
main()
{
	float r,ans;

	clrscr();

	printf("Enter r=");
	scanf("%f",&r);
	printf("r=%f\n",r);

	ans=3.14*r*r;
	printf("Area of circle=%f\n\n",ans);

	getch();
}