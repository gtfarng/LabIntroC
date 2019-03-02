#include<stdio.h>
int main()
{
	int num[10],i,max,min,avg=0;
	
	max=num[0];
	min=num[0];
	
	for(i=0;i<10;i++)
	{
		printf("Enter number %d  : ",i+1);
		scanf("%d",&num[i]);
	}
	
	for(i=0;i<10;i++)
	{
		avg+=num[i];
	}
	
	for(i=0;i<10;i++)
	{
		if(num[i]>max)
		 	max=num[i];			
	}
	
	for(i=0;i<10;i++)
	{
		if(num[i]<min)
		 	min=num[i];			
	}
	
	printf("MAX = %d \n",max);
	printf("MIN = %d \n",min);
	printf("AVG = %d \n",avg/10);
	
	return 0;
}
