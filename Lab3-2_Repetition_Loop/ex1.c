#include<stdio.h>
int main()
{
	int i=0,n;
	printf("Which number do you want to display: ");
	scanf("%d",&n);
	/*
	//for loop
	
	for(i=0;i<5;i++)
	{
		printf("%d %d\n",i+1,7*(i+1));
	}

	
	//while loop
	
	while(i<5)
	{
		printf("%d %d\n",i+1,7*(i+1));
		i++;
	}
	*/
	
	do
	{
		printf("%d %d\n",i+1,n*(i+1));
		i++;
	}
	
	while(n*(i+1)<60);
	
	return 0;
	
}
