#include<stdio.h>

main()
{
	int com,i,len;
	char name[20],rev[20];
	
	printf("Enter name: ");
	gets(name);
	
	strcpy(rev,name);
	
	len = strlen(name);
	
	strrev(name);
	
	com = strcmp(name,rev);
	
	if(com==0)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not Palindrome");
	}
}
