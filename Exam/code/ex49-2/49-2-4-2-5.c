#include<stdio.h>
int main()
{
 	int row=5;
 	int col=6;
 	int i;
 	int j;
 	
 	for(i=0;i<row;i++)
 	{
 		for(j=0;j<col;j+=3)
 		{
 			if(j>=col/3)
 			{
 				printf("*");
 				continue;
			 }
			 else
			 {
			 	printf("o");
			 }
			 printf("\n");
		 }
	 }
 		
 		
	  	
	
	return 0;
}
