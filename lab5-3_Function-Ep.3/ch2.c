#include<stdio.h> 
#include<string.h> 
void replaceStr(char str[],char c1, char c2);   
int main() 
{   
 	int n;   
	char str1[50];  
	
	printf("Enter a string : "); 
	gets(str1);   
	
	printf("Before: str1=\"%s\"\n",str1);  
	
	replaceStr(str1,'a','A');
	
	return 0; 
	
} 

void replaceStr(char str[],char c1, char c2)
{
	int i,j;    
	 
	for(i=0,j=0;i<strlen(str); i++)     
	 	if (str[i]==c1) 
		  	str[i]=c2;	
			  
	printf("After: str1= \"%s\" ",str);    	  	
	
}
 
