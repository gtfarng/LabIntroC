#include<stdio.h>
int main()
{
	int num;
	do
	{
		printf("Enter integer :");
		scanf("%d",&num);
		switch(num)
		{
			case 1:
			case '2': printf("One and Two\n");
			 	 	  break;
			case 2:
			case '1': printf("1 and 2\n");
			case '3': printf("Exit\n");
			 		  break;
			default : printf("Please enter 1,2 or 3:\n");		   				
		}
	}
	while(num!=3);
  	
 		
	return 0;
}
