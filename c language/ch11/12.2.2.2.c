#include<stdio.h>

int a,n;
int *p1;

void input(int a[],int n);
	int i;
	printf("enter n: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	printf("\n\nreverse\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d",a[n-1-i]);
	}
}

void main()
{
	int n,a[n];
	input (a,n);
}
