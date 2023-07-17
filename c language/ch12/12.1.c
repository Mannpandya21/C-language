#include<stdio.h>

struct Student 
{
	int id;
	char name[10];
	int age;
	char course[10];
	char city[10];
	int standard;
	char scl[20];
};

void main()
{
	int n,i;
	
	printf("Enter number of student: ");
	scanf("%d",&n);
	
	struct Student s[n];
	
	for(i=0;i<n;i++)
	{
		
		printf("Enter id\t : ");
		scanf("%d",&s[i].id);
		printf("Enter name\t : ");
		scanf("%s",&s[i].name);
	    printf("Enter age\t : ");
		scanf("%d",&s[i].age);
	    printf("Enter course\t: ");
		scanf("%s",&s[i].course);
	    printf("Enter city\t : ");
		scanf("%s",&s[i].city);
	    printf("Enter standard\t : ");
		scanf("%d",&s[i].standard);
	    printf("Enter scl\t : ");
		scanf("%s",&s[i].scl);
	}
	
	
	printf("\n\n id\t name\t age\t course\t city\t standard\t scl\n======= ======= ======= ======= ======= ======= ===========\n");
	
	for(i=0;i<n;i++)
	{
		
 	   printf(" %d    %s    %d    %s    %s    %d    %s\n",s[i].id,s[i].name,s[i].age,s[i].course,s[i].city,s[i].standard,s[i].scl);
	
	}

}

