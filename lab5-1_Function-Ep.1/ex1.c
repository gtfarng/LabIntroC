#include<stdio.h>
int Get_Fx(int x); 
int main()
{
	int x,ans;
	
	printf("Find the value f(x) where the equation f(x) is\n");
	printf("----------------------------------------------\n");
	printf("f(x)\t= x^2+2x+3\tif x < 0\n");
	printf("f(x)\t= 0\t\tif x = 0\n");
	printf("f(x)\t= x-2\t\tif x > 0\n");
	printf("----------------------------------------------\n");
	
	printf("Enter x: ");
	scanf("%d",&x);
	
	ans=Get_Fx(x);
	printf("f(%d) = %d",x,ans);
	
	return 0;
}

int Get_Fx(int x)
{
	if(x<0)
	  	return x=(x*x)+(2*x)+3;
	else if(x==0)
	 	return x=0;
	else if(x>0)
	 	return x=(x-2);	  	
	
}
