#include<stdio.h>
int main()
{   //Jatupat Pannoi ID 5735512002
	int a;     
	float b, div;  double d;   
	  
	char c;  //ans     
	
	int i=15;
	
	int j=2; //ans         
 
    printf("size of int is %d\n",sizeof(int));     
	printf("size of a is %d\n",sizeof(a));    
	  
    printf("size of float is %d\n",sizeof(float));  //ans
	printf("size of d is %d\n",sizeof(d));  //ans        
 
    printf("size of char or c is %d\n\n",sizeof(c));     
	
	div = i/j; //ans   
	      
	printf("div = %f\n", div); 
	
	printf("\n\n");  
	printf("----------Sumary----------\n");  
	printf("|size of int   is %d bytes|\n",sizeof(int));  
	printf("|size of float is %d bytes|\n",sizeof(float)); 
	printf("|size of char  is %d bytes|\n",sizeof(char)); 
	printf("--------------------------\n");  
	
	getch();
	/*system("PAUSE");
	printf("\n");*/
	return 0;
}
