# include <stdio.h>
void showMatrix(int M[3][2]);
void inputMatrix(int M[3][2]);
void add1(int A[3][2], int B[3][2], int C[3][2]);
void add2(int A[3][2], int B[3][2], int C[3][2]);
int main()
{ int i,j,MatA[3][2]={}, MatB[3][2]={}, MatC[3][2]={};
  printf("Enter elements of Matrix M[3X2]\n");
  printf ("InputMatrix A\n");
  inputMatrix(MatA);
  printf ("\nMatrix A\n");
  showMatrix(MatA);
  printf ("\nInputMatrix B\n");
  inputMatrix(MatB);
  printf ("\nMatrix B\n");
  showMatrix(MatB);
  
  printf("\n\nCall-By-Value");
  printf ("\nMatrix C = Matrix A + Matrix B\n");
  printf("\n");
  /*
  for(i=0;i<3;i++)
  {
  	for(j=0;j<2;j++)
  	{
  		  add1(MatA[i][j],MatB[i][j],MatC[i][j]);
		  showMatrix(MatC[i][j]);
		  
  	}
  }*/
  add1(MatA,MatB,MatC);
  showMatrix(MatC);
  
  printf("\n\nCall-By-referrent");
  printf ("\nMatrix C = Matrix A + Matrix B\n");
  printf("\n");
  add2(MatA,MatB,MatC);
  showMatrix(MatC);

  
  
  return 0;

}


void showMatrix(int M[3][2])
{   int i, j;
    for(i=0;i<3;i++)
  { for (j=0;j<2;j++)
    {
    
	printf("%5d", M[i][j]);
    

    }
    printf("\n");
  }
}


void inputMatrix(int M[3][2])
{    int i, j;
     for (i=0;i<3;i++)
    { 
     for (j=0;j<2;j++)
    {
    printf ("M[%d][%d]:  ", i+1, j+1);
    scanf ("%d", &M[i][j]);
    }
    }
}

void add1(int A[3][2], int B[3][2], int C[3][2])
{   int i, j;
    for (i=0;i<3;i++)
   {
    for (j=0;j<2;j++)
   {
     C[i][j]=A[i][j]+B[i][j];
   }
   }   
}

void add2(int A[3][2], int B[3][2], int C[3][2])
{   int i, j;
    for (i=0;i<3;i++)
   {
    for (j=0;j<2;j++)
   {
     C[i][j]=A[i][j]+B[i][j];
   }
   }   
}


