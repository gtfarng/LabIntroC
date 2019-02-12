#include <stdio.h>

#include <stdlib.h> 

#define MAX 10 

void showMatrix(int M[MAX][MAX], int m, int n); 

void inputMatrix(int M[MAX][MAX], int m, int n);

void addMatrix(int A[MAX][MAX],int B[MAX][MAX], int C[MAX][MAX], int m,int n);  

void mutipiyMatrix( int A[MAX][MAX], int B[MAX][MAX],int m , int n , int p)

int main() 

{   int MatA[MAX][MAX]={}, MatB[MAX][MAX]={}, MatC[MAX][MAX]={}; 

    int ra,rb,ca,cb; 

    printf("Matrix A\n"); 

    printf("Number of rows = ");   scanf("%d",&ra); 

    printf("Number of columns = ");  scanf("%d",&ca); 

    inputMatrix(MatA,ra,ca); 

    showMatrix(MatA,ra,ca); 

    printf("Matrix B\n"); 

    printf("Number of rows = ");   scanf("%d",&rb); 

    printf("Number of columns = ");  scanf("%d",&cb); 

    inputMatrix(MatB,rb,cb); 

    showMatrix(MatB,rb,cb); 

    printf("Matrix C = A + B \n"); 

    void addMatrix(int A[MAX][MAX],int B[MAX][MAX], int C[MAX][MAX], int m,int n); 

    showMatrix(MatC,ra,ca); 

    

    return 0; 

}

// Show elements of Matrix M(m x n) 

void showMatrix(int M[MAX][MAX], int m, int n) 

{ int i,j; 

  for (i=0; i<m; i++) 

  {  for(j=0; j<n; j++) printf("%5d",M[i][j]); 

     printf("\n"); 

  } 

} 

// Input elements of Matrix M(m x n) 

void inputMatrix(int M[MAX][MAX], int m, int n) 

{ int i,j; 

  for (i=0; i<m; i++) 

  {  for(j=0; j<n; j++) 

       { printf("M(%d,%d)=",i+1,j+1); 

         scanf("%d",&M[i][j]); 

       } 

  } 

} 

// Matrix C = A + B  

void addMatrix(int A[MAX][MAX],int B[MAX][MAX], int C[MAX][MAX], int m,int n); 

{  int i,j; 

  for (i=0; i<m; i++) 

  {  for(j=0; j<n; j++) C[i][j]=A[i][j]+B[i][j]; 

  } 

} 

//Matrix c= A x B


