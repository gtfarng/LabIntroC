#include<stdio.h>
#include<math.h>
int main()
{
	char again;
	int num,p1,p2,p3;
	
	do
	{
		printf("Enter number: ");
	 	scanf("%d",&num);
	
	 	p1=pow(num,1);
	 	p2=pow(num,2);
	 	p3=pow(num,3);
	 	printf("\tSeries of power of %d: %d %d %d\n",num,p1,p2,p3);
	
 		printf("Again: ");
   		scanf("%c",&again);
  	 	getchar();
	}
	while((again=='Y')==1||(again=='y')==1);
	
	return 0;
}
