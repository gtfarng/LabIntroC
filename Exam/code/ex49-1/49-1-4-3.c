#include<stdio.h>
int main()
{
	int n,i,fac=1;
	
	printf("Enter positive integer: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fac*=i;
	}
	
	printf("%d! = %d",n,fac);
	
	 	  	 		
	return 0;
}
