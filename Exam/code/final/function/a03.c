#include<stdio.h>
#include<string.h>
void count(char a[20][30] , char b , int n[20]); 
int main()
{
	char Std[20][30];
	int i,num[20];
	char ch;
	
	for(i=0;i<20;i++)
	{
		printf("Enter name %d : ",i+1);
		gets(Std[i]);
	}
	printf("Find alphabet : ");
	scanf("%c",&ch);
	
	count(Std,ch,num);
	
	for(i=0;i<20;i++)
	{
	 	printf("%c in name %d = %d letters\n",ch,i+1,num[i]);
	}
	
	
	return 0;
}
void count(char a[20][30] , char b , int n[20])
{
	int i,j;
	for(i=0;i<20;i++)
	{
			n[i]=0;
		for(j=0;j<strlen(a[i]);j++)
		{
			if(b==a[i][j])
			n[i]++;
		}
	}
	
}
