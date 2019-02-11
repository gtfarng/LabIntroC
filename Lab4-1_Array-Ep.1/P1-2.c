#include<stdio.h>
int main()
{
	int Dido[5];
	float Fifa[3]={4.5,10.5,20.5};
	int i=0;
	float sum=0;
	
	printf("-Input-\n");
	for(i=0;i<5;i++)
	{
		printf("Enter data to Array Dido[%d] :",i);
		scanf("%d",&Dido[i]);
	}
	
	printf("\n-Output-\n");
	for(i=0;i<3;i++)
	{
		printf("In Array Fifa[%d] = %.2f\n",i,Fifa[i]);
	}
	
	
	for(i=0;i<5;i++)
	{
		printf("In Array Dido[%d] = %d\n",i,Dido[i]);
	}
	
	printf("\n-Input-\n");
	for(i=0;i<3;i++)
	{
		printf("Enter data to Array Fifa[%d] :",i);
		scanf("%f",&Fifa[i]);
	}
	
	printf("\n-Output-\n");
	for(i=0;i<3;i++)
	{
		printf("In Array Fifa[%d] = %.2f\n",i,Fifa[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf("In Array Dido[%d] = %d\n",i,Dido[i]);
	}
	
	for(i=0;i<5;i++)
	{
		sum+=Dido[i];
	}
	
	for(i=0;i<3;i++)
	{
		sum+=Fifa[i];
	}
	
		printf("Average of Array Fifa And Array Dido = %.2f",sum/8);
	
	
	return 0;
}
