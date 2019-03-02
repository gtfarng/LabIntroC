#include<stdio.h>
int main()
{
	int a=10,b=3;
	float x=25.1, y=141421e-5;
	char ch='a';
	
	printf("%c, %d, %f\n",ch,b,x);
	printf("%.2f, %.2f, %-10d\n",y,2*x,a%b);
	printf("%d, %.1f, %.1e\n",(int)321.5/a,x+0.67,a+x);
	printf("%d %c\n",(b%a+5-a/6)*a+b,ch++);
	printf("%d, %d, %d\n",y<x,x>=a+b,!a*2);
	printf("%d\n",5<=2>=2.50);
	
	return 0;
}
