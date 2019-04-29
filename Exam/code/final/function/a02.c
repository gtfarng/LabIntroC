#include<stdio.h>
#define MAX 20
int arrange(int x);
int main()
{
	int A[MAX],B[MAX];
	int n,i,j;
	
	printf("Enter n : ");
	scanf("%d",&n);
	j=n;
	for(i=0;i<n;i++)
	{
		printf("Enter A%d : ",i);
		scanf("%d",&A[i]);
	}
	
	for(i=0;i<n;i++)
	{
		j--;
		B[i]=arrange(A[j]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("B%d = %d \n",i,B[i]);
	
	}
	
	
}
int arrange(int x)
{
	return x;
}
