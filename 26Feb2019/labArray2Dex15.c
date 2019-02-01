//labArray2Dex15.c
#include<stdio.h>
int main()
{ 
 	int i, j;
 	/*int scores[3][5] = { {84, 71, 96, 65, 79},
 						{90, 55, 83, 68, 96},
 						{61, 77, 82, 94, 59}};
 */	int scores[3][5];				
 	float sum=0,sum1=0;

 	for (i=0; i<3; i++)
 	{ 
 		 for (j=0;j<5;j++)
 		{
 			printf("scores[%d][%d] :",i,j);
 			scanf("%d",&scores[i][j]);
 			sum +=scores[i][j];
 		
 		}
 		
 		printf("Sum of row %d = %.2f \n",i+1, sum);
 	}
 	
 	return 0;
}