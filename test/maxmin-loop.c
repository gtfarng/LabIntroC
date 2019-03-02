#include<stdio.h>
int main()
{
	int num[5],max,min,i;
 	for(i=0;i<5;i++)
	 {
	  	printf("Enter number %d: ",i+1);
		scanf("%d",&num[i]);	
	 }
	 max=num[0];
	 min=num[0];
	 
	 for(i=0;i<5;i++)
	 {
	 	if(max<num[i])
	 	 	max=num[i];
	 	else
		  	min=num[i];	   	
	 }	
	 	 
	 	printf("Max = %d\n",max);
	 	printf("Min = %d\n",min);
	
	return 0;
}
