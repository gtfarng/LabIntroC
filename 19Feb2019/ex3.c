#include<stdio.h>
int main()
{
	char string[20];
	int i;
    
	printf("Enter String find a :");
	scanf("%s",string);	
	for(i=0;string[i];i++)
	  { if(string[i]=='a')
	      printf("position 'a' is : %d\n",i+1);
	  }
	
	
	return 0;
	
}
