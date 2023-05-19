#include<stdio.h>
#include<conio.h>
void main()
{
	int bs,gs;
	int hra=10,da=5,ta=8;

	clrscr();

	printf("Base salary=");
	scanf("%d",&bs);

	hra=bs*0.1;
	da=bs*0.05;
	ta=bs*0.08;

	gs=bs+da+hra+ta;

	printf("gs is =%d\n",gs);

	getch();
}

