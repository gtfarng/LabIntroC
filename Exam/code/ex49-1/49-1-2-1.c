#include<stdio.h>
int main()
{
	int num,i;
	printf("Enter number: ");
	scanf("%d",&num);
	
	for(i=1;i*num<=100;i++)
	{
		printf("%d\t%d\n",i,i*num);
	}
	
	return 0;
}
