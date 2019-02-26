#include <stdio.h>
#define MAX 10
int main()
{
 	int matA[MAX][MAX]={}; 
 	int matB[MAX][MAX]={}; 
 	int matC[MAX][MAX]={};

 	int m,n,p,i,j;
 	
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
 
 	
	for(i=0;i<n;i++)
	{  for(j=0;j<p;j++)
	   {
	   	  matC[i][j]=(matA[i][0]*matB[0][j])+(matA[i][1]*matB[1][j]);
	   }
	}
    
	printf("\nMatrix C (m X p) = Matrix A(m X n) X Matrix B(n X p)\n\n");
	for(i=0;i<n;i++)
	{  for(j=0;j<p;j++)
	   {
	   	  printf("%-4d",matC[i][j]);
	   }
	   printf("\n");
	}	
	/*  	
 	printf("| %5d\t%5d\t%5d\t%5d |\n",matA[0][0]*matB[0][0]+matA[0][1]*matB[1][0],matA[0][0]*matB[0][1]+matA[0][1]*matB[1][1],matA[0][0]*matB[0][2]+matA[0][1]*matB[1][2],matA[0][0]*matB[0][3]+matA[0][1]*matB[1][3]);
 	printf("| %5d\t%5d\t%5d\t%5d |\n",matA[1][0]*matB[0][0]+matA[1][1]*matB[1][0],matA[1][0]*matB[0][1]+matA[1][1]*matB[1][1],matA[1][0]*matB[0][2]+matA[1][1]*matB[1][2],matA[1][0]*matB[0][3]+matA[1][1]*matB[1][3]);
 	printf("| %5d\t%5d\t%5d\t%5d |\n",matA[2][0]*matB[0][0]+matA[2][1]*matB[1][0],matA[2][0]*matB[0][1]+matA[2][1]*matB[1][1],matA[2][0]*matB[0][2]+matA[2][1]*matB[1][2],matA[2][0]*matB[0][3]+matA[2][1]*matB[1][3]);
 	*/
 	return 0;
}
