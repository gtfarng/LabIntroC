#include<stdio.h> 
#include<string.h> 
char reverse(char str[]);
int main() 
{   
 	char str[100]; 
 	int i;
	
	 printf("Enter String: ");
	 gets(str);
	 
	 reverse(str);
		
	 return 0; 
}

char reverse(char str[])
{
	int i;
	
	printf("\nBefore Reverse\n");
	for(i=0;i<strlen(str);i++)
	{
		printf("%c ",str[i]);
	}
	
	printf("\n\nAfter Reverse\n");
	for(i=strlen(str)-1;i>=0;i--)
	{
		printf("%c ",str[i]);
	}

 	printf("\n");
}
