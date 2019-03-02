#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i,len,AZ=0,az=0,c09=0,aeiou=0,AEIOU=0;
	
	printf("Enter String : ");
	gets(str);
	
	len=strlen(str);
	
	for(i=0;i<=len;i++)
	{
		if(str[i]>='A'&&str[i]<='Z')
		 {
		 	AZ++;
		  	if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')	
			  	AEIOU++;
		 }
		 
		else if(str[i]>='a'&&str[i]<='z')
		 {
		 	az++;	
		 	if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')	
			  	aeiou++	;
		 }	
		
		else if(str[i]>='0'&&str[i]<='9')
		 	c09++;	 	
	}
	
	printf("Total char = %d\n",len);
	printf("A-Z : %d\na-z : %d\nA-E-I-O-U : %d\na-e-i-o-u : %d\n0-9 : %d\n",AZ,az,AEIOU,aeiou,c09);
	
	return 0;
}
