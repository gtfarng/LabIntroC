#include<stdio.h>
int main()
{ 	int i,j,n;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j==i-n/2||j==i-n/2||j==n/2-i||j+1==n/2-i+n)
			{	
			 	printf("*");
			}
			else
		 	{
				printf(" ");
	 		}
		}
			printf("\n");
	}
	
	/*
	*
	**
	***
	****
	*/
	return 0;
}
