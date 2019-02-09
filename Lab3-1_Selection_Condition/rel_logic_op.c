// rel_logic_op.c 
#include <stdio.h>   
int main () 
{    int i,j; 
     
     printf("Enter the value of i: "); 
     scanf("%d",&i); 
     printf("Enter the value of j: "); 
     scanf("%d",&j); 
    

     /* Relational Operator */ 
     printf("\nUsing Relational Operator\n"); 
     printf(" i<j  is %d\n", i<j); 
     printf(" i<=j is %d\n", i<=j); 
     printf(" i==j is %d\n", i==j); 
     printf(" i>j  is %d\n", i>j); 
     printf(" i>=j is %d\n", i>=j); 
     printf(" i!=j is %d\n", i!=j); 
    
     /* Logical Operator */ 
     printf("\nUsing Logical Operator\n"); 
     printf("AND i&&j is %d\n", i&&j); 
     printf("OR i||j is %d\n", i||j); 
     printf("NEGATION !i   is %d\n", !i); 
     printf("NEGATION !j   is %d\n", !j); 
    
      return 0; 
} 
