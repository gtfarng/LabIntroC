#include<stdio.h>
int sum(int *score);
int main()
{
	int Score[10];
	int i;
	
	for(i=0;i<10;i++)
	{
		printf("Enter Score[%d]: ",i+1);
		scanf("%d",&Score[i]);
	}
	
	printf("Sum of Score = %d\n",sum(Score));
		
	return 0;
}

int sum(int *score)
{ 	
	int i,sum=0;
	for(i=0;i<10;i++)
	{
		sum+=score[i];
	}
	
	return sum;
}
