#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	float ans;

	clrscr();

	printf("Enter A=");
	scanf("%d",&a);

	printf("Enter b=");
	scanf("%d",&b);

	ans=(a*a*a)+(b*b*b)+(3*a*b*b)+(3*a*a*b);

	printf("ans=%d",ans);

	getch();
}
