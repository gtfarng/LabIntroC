#include<stdio.h>
#include<math.h> 
int main()
{
 	double powAB,sqrtX;
 	int a,b,x;
 	
 	printf("Enter value a :");
 	scanf("%d",&a);
	printf("Enter value b :");
 	scanf("%d",&b);
 	printf("Enter value x :");
 	scanf("%d",&x);
 	
	powAB=pow(a,b);
	sqrtX=sqrt(x);
	
	printf("a^b = %d\n",(int)powAB);
	printf("x^(1/2) = %.2f\n",sqrtX);
	
	//system("PAUSE");
	
	return 0;
}
