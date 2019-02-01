#include<stdio.h>
#include<string.h>
int main()
{   
    int index=0,i;
    char string[20];
    
	printf("Enter string to seach a: ");
    scanf("%s",&string);
    
    for(i=0;string[i]!='\0';i++)
    {
    	if(string[i]=='a')
    	index++;
    }
    /*
    while(string[index] != '\0')
          if(string[index] = 'x')
      */         
    printf("string : %s \n",string);
    printf("Show the result: %s\n",index);
    
    
    
    return 0;
    
}
