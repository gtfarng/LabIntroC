//labString3.c 
#include<stdio.h> 
#include<string.h> 
int main() 
{   
 	char std[4][60]; 
	 
	printf("Enter studentís first name: ");   
	gets(std[0]);   
	
	printf("Enter studentís last name: ");     
	gets(std[1]);   
	  
	printf("Enter studentís faculty: ");     
	gets(std[2]);   
	
	printf("Enter studentís Province of birth: ");     
	gets(std[3]);  
	  
	printf("\nReport\n"); 
	printf("Name: %s %s\n",std[0],std[1]);    
	printf("Faculty: %s\n",std[2]);   
	printf("Province of birth: %s\n",std[3]);       
	
	return 0; 
}
