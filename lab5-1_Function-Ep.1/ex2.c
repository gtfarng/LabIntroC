#include<stdio.h>
int Get_Fxy(int x, int y); 
int main()
{
	int x,y,ans;
	
	printf("Find the value f(x,y) where the equation f(x,y) is\n");
	printf("----------------------------------------------\n");
	printf("f(x,y)\t= x+y\tif x+y > 0\n");
	printf("f(x,y)\t= 0\tif x+y = 0\n");
	printf("f(x,y)\t= -x+y\tif x+y < 0\n");
	printf("----------------------------------------------\n");
	
	printf("Enter x: ");
	scanf("%d",&x);
	printf("Enter y: ");
	scanf("%d",&y);
	
	ans=Get_Fxy(x,y);
	printf("f(%d,%d) = %d\n",x,y,ans);
	
	return 0;
}

int Get_Fxy(int x, int y)
{
	if(x+y>0)
	  	return x+y;
	else if(x==0)
	 	return 0;
	else if(x+y<0)
	 	return -x+y;	  	
	
}
