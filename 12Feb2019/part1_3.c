//part1_3.c
#include<stdio.h>
int main()
{
	int num;
	printf("\nEnter a positive integer: ");
	scanf("%d",&num);
	while(num>1)
	{
		printf("%d \n",num);
		num/=10;
	}
	
	
	
	return 0;
}
