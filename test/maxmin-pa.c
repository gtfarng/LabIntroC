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
	 
	 for(i=0;i<5-1;i++)
	 {
	 	max=num[i]>num[i+1]?max:num[i+1];	
	 	min=num[i]<num[i+1]?min:num[i+1];	
	 }	
	 
	 	printf("Max = %d\n",max);
	 	printf("Min = %d\n",min);
	
	return 0;
}
