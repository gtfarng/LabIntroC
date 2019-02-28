#include<stdio.h>
int main()
{
	int x=5;
	float y=5;
	char z='E'+x;
	y=y/x*2.5;
	x=x/2+6;
	
	printf("%d, %d, %c",x,y,z);
	
	return 0;
}
