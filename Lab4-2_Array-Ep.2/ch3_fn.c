#include<stdio.h>
#define max 10
int main()
{
	int n,m,p,i,j;
 	int MatA[max][max]={},MatB[max][max]={},MatC[max][max]={};	
 	
	printf("Enter N: ");
	scanf("%d",&n);
	printf("Enter M: ");
	scanf("%d",&m);
	printf("Enter P: ");
	scanf("%d",&p);
	
	printf("\nEnter Matrix A\n");
	for(i=0;i<m;i++)
	{  for(j=0;j<n;j++)
	   {
	   	  printf("Enter MatA[%d][%d] : ",i,j);
	   	  scanf("%d",&MatA[i][j]);
	   	
	   }
	}
	
	printf("\nEnter Matrix B\n");
	for(i=0;i<n;i++)
	{  for(j=0;j<p;j++)
	   {
	   	  printf("Enter MatB[%d][%d] : ",i,j);
	   	  scanf("%d",&MatB[i][j]);
	   	
	   }
	}
	
	printf("\n\nMatrix A\n\n");
	for(i=0;i<m;i++)
	{  for(j=0;j<n;j++)
	   {
	   	  printf("%-4d",MatA[i][j]);
	   }
	   printf("\n");
	}
    
	printf("\nMatrix B\n\n");
    for(i=0;i<n;i++)
	{  for(j=0;j<p;j++)
	   {
	   	  printf("%-4d",MatB[i][j]);
	   }
	   printf("\n");
	}
	
	for(i=0;i<m;i++)
	{  for(j=0;j<p;j++)
	   {
	   	  MatC[i][j]=(MatA[i][0]*MatB[0][j])+(MatA[i][1]*MatB[1][j]);
	   }
	}
    
	printf("\nMatrix C (m X p) = Matrix A(m X n) X Matrix B(n X p)\n\n");
	for(i=0;i<m;i++)
	{  for(j=0;j<p;j++)
	   {
	   	  printf("%-4d",MatC[i][j]);
	   }
	   printf("\n");
	}	

	return 0;
}
