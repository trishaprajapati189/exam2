#include<stdio.h>
 void main()
 
 {
      	table();
 }

void table()
{
	int n,i;
	printf("enter n:");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		printf("%d x %d = %d\n",n,i,n*i);
	}
	
}
