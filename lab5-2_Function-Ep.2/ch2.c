#include <stdio.h>
void inputMatrix(int M[3][2]);     
int min(int M[3][2]);    
int max(int M[3][2]); 
int main() 
 {  
  	int i,j,Mat[3][2];

  	printf("Enter elements of Matrix M[3x2]\n");
  	inputMatrix(Mat);
  	printf("\n");
  	printf("Min = %d\n",min(Mat));
  	printf("Max = %d\n",max(Mat));
 
  	
	return 0; 
} 

void inputMatrix(int M[3][2])
{
 	int i,j;
 	
 	for(i=0;i<3;i++)
 	{
 		for(j=0;j<2;j++)
 		{
 			printf("M[%d][%d]: ",i+1,j+1);
 			scanf("%d",&M[i][j]);
		 }
	 }	
	 printf("Matrix\n");
	 	for(i=0;i<3;i++)
 	{
 		for(j=0;j<2;j++)
 			printf("%3d  ",M[i][j]);
 		printf("\n");
	 }
}     

int min(int M[3][2])
{
	int i,j,min;
 	
 	min=M[0][0];
 	for(i=0;i<3;i++)
 	{
 		for(j=0;j<2;j++)
 		{
 			if(M[i][j]<min)
 			 	min=M[i][j];
		}
	 }	
	 return min;
}   
int max(int M[3][2])
{
	int i,j,max;
 	
 	max=M[0][0];
 	for(i=0;i<3;i++)
 	{
 		for(j=0;j<2;j++)
 		{
 			if(M[i][j]>max)
 			 	max=M[i][j];
		}
	 }	
	
	return max;
 } 



											  

