#include<stdio.h>
#include<conio.h>
void main()
{
	float c,f;

	clrscr();

	printf("Enter c=");
	scanf("%f",&c);

	f=(c*9/5)+32;

	printf("Temperature in fahrenheit=%f\n",f);

	getch();
}
