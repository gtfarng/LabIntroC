
#include<stdio.h> 
#include<string.h> 
int main() 
{   
 	char str[60]; 
 	int i,vowel=0,consonant=0;
	
	 printf("Enter String: ");
	 gets(str);
	 
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
		 	vowel++;
		else 
		 	consonant++;	
	}    
	
	printf("This string %s have vowel %d , and consonant %d \n",str,vowel,consonant);  		
	
	return 0; 
}
