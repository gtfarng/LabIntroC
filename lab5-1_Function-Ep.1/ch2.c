#include<stdio.h>
int calArea(int a, int b);
void main(void)
{
 	int width, length;
	 
	printf("Enter width :");
	scanf("%d",&width); 
 	printf("Enter length :"); 
	scanf("%d",&length); 
	
	printf("Area of rectangle = %.2f\n",(float)calArea(width,length));

	system("PAUSE");
	//getch();
} 

int calArea(int a, int b)
{
	return a*b;
} 
 
