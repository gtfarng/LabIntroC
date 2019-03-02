#include<stdio.h>
int main()
{
	int max,min,num1,num2,num3;
	
	printf("Enter Number1: ");
	scanf("%d",&num1);
	printf("Enter Number2: ");
	scanf("%d",&num2);
	printf("Enter Number3: ");
	scanf("%d",&num3);
	
	/*max=num1>num2?num1:num2;
	min=num1<num2?num1:num2;
	
	max=max>num3?max:num3;
	min=min<num3?min:num3;
	*/
//	max=num1>num2?num1:num2;
//	min=num1<num2?num1:num2;
	
	max=(num1>num2?num1:num2)>num3?(num1>num2?num1:num2):num3;
	min=(num1<num2?num1:num2)<num3?(num1<num2?num1:num2):num3;
	
	printf("Max = %d\n",max);
	printf("Min = %d\n",min);
	return 0;
}
