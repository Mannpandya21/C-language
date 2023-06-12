#include<stdio.h>

main()
{
	char str[20];
	int i;
	
	printf("Enter any character: ");
	scanf("%s",&str);
	for(i=0;i<20;i++)
	{
		if(str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
	    } 	
	
	}
	printf("converted string: %s",str);
	
}
