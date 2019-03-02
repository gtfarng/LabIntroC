#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],ch1,ch2;
	int i,len,count=0;
	
	printf("Enter string : ");
	gets(str);
	len=strlen(str);
	
	printf("String = %c%s%c length = %d \n",34,str,34,len);
	printf("Enter a Character to find : ");
	scanf("%c",&ch1);
	getchar();
	
	for(i=0;i<len;i++)
	{
		if(str[i]==ch1)
		 	count++;					
	}
	
	printf("%c is found %d times.\n",ch1,count);
	
	printf("Enter a Character to replace : ");
	scanf("%c",&ch2);
	getchar();
	
	for(i=0;i<len;i++)
	{
		if(str[i]==ch1)
		 	 str[i]=ch2;					
	}
	
	printf("New String = %c%s%c length = %d \n",34,str,34,len);
	
	return 0;
}
