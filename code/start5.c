#include<stdio.h>
int main()
{ 	int i,j,n;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j+1==n-i)
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
	    *
	   *
	  *
	 *
	*/
	
	return 0;
}
