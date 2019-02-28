#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0,j=0,k=0;
	char seat[10][10];
	
	
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			seat[i][j]='*';
		}
	}
	
	while(1)
	{
	printf("\t\tPSU Theather\n");
	printf("   ");
	for(i=0;i<10;i++)
	 	printf("%d   ",i+1);
	printf("\n");
	
	for(i=0;i<10;i++)
	{
				
	 	printf("   ");
	 	for(j=0;j<10;j++)
	 	{
		 	printf("+---");	
	 	}
	 	printf("\n");
	 	printf("%2d ",i+1);	
	 	for(j=0;j<=10;j++)
	 	{
		 	printf("| %c ",seat[i][j]);	
	 	}
	 	printf("\n");
	 	}	
	
	 	printf("   ");
	 	for(j=0;j<10;j++)
	 	{
		 	printf("+---");	
	}	
	
	}
	
	 
	
	return 0;
}
