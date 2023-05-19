#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	float ans;

	clrscr();

	printf("Enter A=");
	scanf("%d",&a);

	printf("Enter b=");
	scanf("%d",&b);

	printf("Enter c=");
	scanf("%d",&c);

	ans=(a*a)+(b*b)+(2*a*b)+(2*b*c)+(2*c*a)+(c*c);

	printf("ans=%d",ans);

	getch();
}