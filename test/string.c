#include<stdio.h>
#include<string.h>
int main()
{
	char text[100];
	int len,i;
	
	printf("Enter Text: ");
	gets(text);
	len=strlen(text);
	printf("String : %s\n",text);
	printf("strlen = %d\n",len);
	
	for(i=0;i<=len;i++)
	{
		printf("%d => %c\n",i,text[i]);
	}
	
	return 0;
}
