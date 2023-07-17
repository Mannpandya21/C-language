#include<stdio.h>
#include<conio.h>
main()
{
	int m=0,k=1,p;
	int i,n;

	clrscr();

	printf("Enter a number=");
	scanf("%d",&n);

	clrscr();
	for(i=1;i<=n;i++)
	{
		printf("%d \n",m);
		p=m+k;
		m=k;
		k=p;
	}
	getch();
}









