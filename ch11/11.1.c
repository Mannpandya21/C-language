#include<stdio.h>

void main()
{
	int a,b;
	
	int p1,p2;
	
	printf("Enter a: ");
	scanf("%d",p1);
	printf("Enter b: ");
	scanf("%d",p2);
	
	a=&p1;
	b=&p2;
	
	*p1 = *p1 + *p2;
	*p2 = *p1 - *p2;
	*p1 = *p1 - *p2;
	
	printf("Address : %u",a);
	printf("a : %d\n",a);
	printf("b : %d\n",p);
	
	
	
}
