#include<stdio.h>

void main()
{
	int a[5],i,sum=0;
	int *ptr;
	printf("enter n :");
	scanf("%d",&a[i]);
	
	
	for(i=0; i<5; i++)
	{
		printf("a[%d] : ",i+1);
		scanf("%d",&a[i]);
	}
	ptr=&a[0];
	for(i=0; i<5; i++)
	{
		printf("square of rach a[%d]: %d\n ",i+1,*(ptr+i)* *(ptr+i));
	}

}
