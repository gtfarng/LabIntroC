#include<stdio.h>
int main()
{
 	int i=0;
 	int j=0;
 	int k=0;
 	do
	 {
	 	j=i*i*i;
	 	printf("%d",i);
	 	do
	 	{
	 		k=i+2*j;
	 		printf("%d%d",i,j);
 			j+=2;
		 }
		 while(k<=10);
	  	printf("\n");
	  	i++;
	 }
	 while(j<=5);
	
	return 0;
}
