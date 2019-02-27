#include<stdio.h>
#define MAX 5
int main()
{
	int i,j;
 	
	for(i=MAX;i>0;i--)
	{
		for(j=0;j<MAX;j++)
		{
			if(j%2==0)
			 	printf("*");
		}
		printf("\n");
	}
   	
 		
	return 0;
}
