#include<stdio.h>
#include<math.h>
#define PI 3.1416
int main()
{
	int r;
	float v=0,a=0,p2,p3;
	
	printf("Please enter radius of sphere: ");
	scanf("%d",&r);
	
	p2=pow(r,2);
	p3=pow(r,3);
	v=(4.0/3)*PI*p3;
	a=4*PI*p2;
	
	printf("Volume of sphere is %.2f\n",v);
	printf("Surface area of sphere is %.2f\n",a);
	
	return 0;
}
