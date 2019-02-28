#include<stdio.h>
int main()
{
	int row=0,weight=0,i=0,w;
	char ch;
	
	do
	{
		printf("Please enter weight of a passenger rumber %d: ",i+1);
		scanf("%d",&w);
		weight+=w;
		printf("%d passenger %d Kilograms\n",i+1,weight);
		printf("More passenger('Y' or 'N'): ");
		scanf("%c",&ch);
		getchar();
		i++;			
	}
	while(i<7&&weight<400&&(ch=='N'));
	
	
	return 0;
}
