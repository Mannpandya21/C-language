#include<stdio.h>

int add(int a,int b)
{
	int sum;
	sum = a+b;
}
void main()
{
	int cal,sum,a,b;
	printf("enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	
		printf("Enter...");
		printf("1) foe +");
		printf("2) foe -");
		printf("3) foe *");
		printf("4) foe /");
		printf("5) foe %");
		
		switch(cal)
		{
				case 1:
						{
							add(a,b);
							printf("%d",sum);
							break;
						}
		}
}
