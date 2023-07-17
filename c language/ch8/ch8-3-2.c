#include<stdio.h>

main()
 {
  int r,c,a,b,sum=0,i,j;
  printf("Enter the number of row size: ");
  scanf("%d",&r);
  printf("Enter the number of column size: ");
  scanf("%d",&c);

  printf("\nEnter array A's elements':\n");
  for (i=0;i<r;i++)
  {
    for (j=0;j<c;j++)
   {
      	printf("a[%d][%d]: ",i+1,j+1);
      	scanf("%d",&a[i][j]);
    }
}


  printf("\nEnter array B's elements:\n");
  for (i=0;i<r;i++)
  {
    for (j=0;j<c;j++)
   {
      	printf("b[%d][%d]: ",i+1,j+1);
      	scanf("%d",&b[i][j]);
    }
}

  for (i=0;i<r; i++)
  {
    for (j=0;j<c;j++)
   {
    	  sum[i][j] = a[i][j] + b[i][j];
    }
}


  printf("\nArray c is: \n");
  for (i=0;i<r;i++)
  {
    for (j=0;j<c;j++)
    {
   	   printf("%d ",sum[i][j]);
     	 if (j==c-1)
	   {
        printf("\n\n");
      }
    }
}
}

