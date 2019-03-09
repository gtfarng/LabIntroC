#include<stdio.h> 
#include<string.h> 
char palindrome(char str[]);
int main() 
{   
 	char str[100]; 
 	
	 printf("Enter String: ");
	 gets(str);
	 
	 palindrome(str);
		
	 return 0; 
}

char palindrome(char str[])
{
	int i;
	
	for(i=0;i<(strlen(str))/2;i++)
	{
		if((strlen(str))%2==0)
			if(str[i] != str[(strlen(str))-i-1])
	 	 	 	{
	 		  		printf("This String \"%s\" is Non-Palindrome\n",str);
	 		  		break;
		  	 	}
	 		 	else
	 		 	{
	 		 		printf("This String \"%s\" is Palindrome\n",str);
	 			 	break;
			 	}
		else
		 	{
		 		printf("This String \"%s\" is Non-Palindrome\n",str);
		 		break;
		 	}
		 	
	} 

}

