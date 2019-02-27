#include<stdio.h>
int main()
{
	int i,j,n;
	
	printf("Enter integer: ");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			printf("%d, ",i+j);
		}
		printf("\n");
	}
 	
	
  	
 		
	return 0;
}
