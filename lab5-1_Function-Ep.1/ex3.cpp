#include<stdio.h>
#define PI 3.14159
float calCylinder(const float pi, float x, float y); 
int main()
{
	float d,h,ans;
		
	printf("Enter diameter (cm.): ");
	scanf("%f",&d);
	printf("Enter height (cm.): ");
	scanf("%f",&h);
	
	ans=calCylinder(PI,d,h);
	printf("Cylinder volume (d= %.2f cm., h= %.2f cm.) = %.2f cm^3",d,h,ans);
	
	return 0;
}

float calCylinder(const float pi, float x, float y)
{
	  	return pi*(x/2)*(x/2)*y;
}
