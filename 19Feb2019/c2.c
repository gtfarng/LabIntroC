#include<stdio.h>
int main()
{
	int i,Data[5];
	for(i=0;i<5;i++)
	{
		printf("Enter Data[%d] :",i);
		scanf("%d",&Data[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf("In Array Data[%d] = %d\n",i,Data[i]);
	}
	
	return 0;
}
