#include<stdio.h>
int main()
{
	int num[3];
	int i,n[3];
	
	for(i=0;i<3;i++)
	{
		printf("Enter Number %d : ",i+1);
		scanf("%d",&num[i]);
	}
	
	n[0]=num[0];
	for(i=1;i<3;i++)
	{
		if(n[0]>num[1])
		{
			n[0]=num[0];
			printf("%d ",n[0]);
		}
		else
		{
		 	n[0]=num[1];
		 	printf("%d ",n[0]);
			
		}
	}
	
	
	
	
	

    return 0;


}
