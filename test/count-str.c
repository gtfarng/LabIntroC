#include<stdio.h>
#include<string.h>
int main()
{
	char str[255];
	char ch;
	int count=0;
	int i,j,k;
	
	printf("Enter Srting: ");
	scanf("%s",str);
	
	k=strlen(str);
	for(i=0;i<k;i++)
	{
		if(ch!=' ')
		{
			count=0;
			for(j=i;j<k;j++)
			{
				if(ch==str[i]&&ch)
				{
					count++;
				
				}
			}
		printf("%c = %d\n",ch,count);
		}
		
	}
	return 0;
}
