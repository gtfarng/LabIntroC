//labString1.c 
#include<stdio.h>
#include<string.h>
int main() 
{  
 	char ch1;  
	char str1[50], str2[50];
	
	printf("Enter first string: "); 
	gets(str1); 
	printf("Enter second string:");
	gets(str2); 
	
	if((strcmp(str1,str2))==-1)
	 	printf("\"%s\" comes before \"%s\" \n",str1,str2);
	else if((strcmp(str1,str2))==1)
	 	printf("\"%s\" comes after \"%s\" \n",str1,str2);
	else
                printf("\"%s\" comes before \"%s\" \n",str1,str2);	
		 
	
	return 0; 
}
