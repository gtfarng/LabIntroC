#include <stdio.h>
void show1(int x); 
void show2(int x[ ],int n); 
int main()  
{  
 	int i;
	int a[5]={3, -1, 2, 7, 8};
	int b[5];
	
	printf("Show all elements of array\n");
	
	for( i=0; i<5; i++) 
	show1(a[i]);   
      printf("\nEnd of program.\n\n"); 
      
    show2(b,5);
      
         
      // getch(); 
	   return 0; 
}  

void show1(int x) 
{  
 	printf(" %d ", x);
} 
 
void show2(int x[ ],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter number[%d]: ",i+1);
		scanf("%d",&x[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf(" %d ", x[i]);
	}
	
	 printf("\nEnd of program.\n\n"); 

 } 
