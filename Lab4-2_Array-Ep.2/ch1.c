#include<stdio.h>
int main()
{ 
  	int i, j, scores[3][5];
 	float sum=0;
 	
 	for(i=0;i<3;i++)
 	{
 		for(j=0;j<5;j++)
 		{
 			printf("Enter Number[%d][%d] :",i,j);
 			scanf("%d",&scores[i][j]);
 		} 

 	}

 	for (i=0; i<3; i++)
 	{ 
 		for (j=0; j<5; j++)
 	 	{	
 		sum = sum+scores[i][j]; 	
		}
 		printf("Sum of row %d = %.2f\n",i+1,sum);
 	}



 		return 0;
}
