#include <stdio.h> 
#include<stdlib.h>
#include <math.h> 
int main()  
{     
 	int num,pos,tmp;
        double cal;
        
          
	printf("Please enter a number (6 digits): ");     
	scanf ("%d",&num);     
	printf("Please select the position (1-6): ");     
	scanf ("%d",&pos);           
	//tmp=pos-1;
        cal=pow(10,pos);

        printf("The digit is %f\n",cal);         
	
	return 0;    
}
	
