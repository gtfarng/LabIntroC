#include<stdio.h>
int main()
{
	int i=1,j=8;

printf("Loop for\n");
	for(i=1;i<=5;i++)
	//for(i=1;i<=5;i+=2)
	{
		printf("%d %d\n",i,j);
 	 	j-=2;
	}
	
i=1;j=8;	
printf("\nLoop while\n");
	while(i<=5)
	{
		printf("%d %d\n",i,j);
 	 	j-=2;
 	 	i++;
	}
i=1;j=8;
printf("\nLoop do-while\n");
 	do
 	{
 		printf("%d %d\n",i,j);
 	 	j-=2;
 	 	i++;
 		
 	}
 	while(i<=5);

	
	
	return 0;
}
