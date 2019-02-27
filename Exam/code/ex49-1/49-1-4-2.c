#include<stdio.h>
int main()
{
	int i,j,n;
	
	printf("Enter integer: ");
	scanf("%d",&n);
	
	i=n;	
	while(i>0)
	{
		j=0;
		while(j<i)
		{
			printf("%d, ",i+j);	
			j++;			
		}
		printf("\n");
		i--;
	}
	 	  	 		
	return 0;
}
