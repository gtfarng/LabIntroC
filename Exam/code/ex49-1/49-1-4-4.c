#include<stdio.h>
int main()
{
	int n,i;
	
	printf("Enter positive integer: ");
	scanf("%d",&n);
	
	for(i=12;i>=1;i--)
	{
	 	printf("%d * %d = %d\n",n,i,i*n);
	}
	

	
	 	  	 		
	return 0;
}
