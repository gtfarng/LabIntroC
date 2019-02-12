//labMatrix.c
#include <stdio.h>
#define MAX 10
int main()
{
 	int matA[MAX][MAX]; 
 	int matB[MAX][MAX]; 
 	int matC[MAX][MAX];

 	int m,n,p,ra,rb,ca,cb,i,j;

 	
 	printf("Enter Number of M : ");
 	scanf("%d",&m);
 	printf("Enter Number of N : ");
 	scanf("%d",&n);
 	printf("Enter Number of P : ");
 	scanf("%d",&p);
 	
 	printf("\nEnter Matrix A\n");
 	
 	for (i=0; i<n; i++)
 	{
 	 for(j=0; j<m; j++)
 	{ 
 	  printf("matA(%d,%d): ",i+1,j+1);
	  scanf("%d",&matA[i][j]);
  	}
 	}

 	printf("\nEnter Matrix B\n");
 	for (i=0; i<m; i++)
 	{ 
 	for(j=0; j<p; j++) 
 	{
 	printf("matB(%d,%d): ",i+1,j+1);
 	scanf("%d",&matB[i][j]);	
   
 	}
 	}
        
 	printf("\nMatrix A\n");
        for (i=0; i<n; i++)
 	{ 
 	for(j=0; j<m; j++) 
 		printf("%5d",matA[i][j]);
 	printf("\n");
 	}

 	printf("\nMatrix B\n");
 	for (i=0; i<m; i++)
 	{ 
 	for(j=0; j<p; j++) 
 		printf("%5d",matB[i][j]);
 	printf("\n");
 	}
 
 	printf("\nC(MxP) = A(MxN) X B(NxP) \n");


 	for (i=0; i<m; i++)
 	{
 	for(j=0; j<p; j++) 
 	 	matC[i][j]=matA[i][j]*matB[i][j];
 	}

 	for (i=0; i<m; i++)
 	{ 
 	for(j=0; j<p; j++) 
 		printf("%5d",matC[i][j]);
  	}

 	return 0;
}
