#include<stdio.h>
int main()
{
 	char Char=65;
 	char in_ch;
 	
 	printf("Enter char(A-Z) : ");
 	scanf("%c",&in_ch);
 	
 	if(in_ch>='A'&&in_ch<='Z')
 	{
 	 	printf("The order of letters is %d",in_ch);
	}
 	else
 	 	printf("You do not enter capital letters.",Char);
	
	return 0;
}
