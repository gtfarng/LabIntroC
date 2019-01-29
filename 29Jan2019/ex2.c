#include <stdio.h> 
#include <math.h> 
int main()  
{     
 	int num,pos;     
	printf("Please enter a number (6 digits): ");     
	scanf ("%d",&num);     
	printf("Please select the position (1-6): ");     
	scanf ("%d",&pos);           
	printf("The digit is %d\n",num/(int)pow(10,pos-1)%10);         
	
	return 0;    
}
