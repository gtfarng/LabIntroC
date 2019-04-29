#include<stdio.h>
#include<math.h>
typedef struct {
 	int real;
 	int imag;
} Complex;

Complex cconst(int re ,int im);
double cabsolute (Complex z ); 	

int main()
{
  	int i,j,re,im; 
	double a;
  	Complex z[5], sum;
  	printf("Enter 5 complex numbers \n");
  	
	for(i=0;i<5;i++)
	{
 		scanf("%d%d",&re,&im);
 		z[i] = cconst(re,im);
 	}
  	sum = cconst(0,0);
  	printf("Absolute value of complex numbers\n");


  	for(i=0;i<5;i++)
 	{
  		a = cabsolute(z[i]);
  		printf("|%d+%di| = %.4lf\n",z[i].real,z[i].imag,a);
  		sum.real += z[i].real;
  		sum.imag += z[i].imag,a;
	}
 	
	printf("\nSum = %d + %di",sum.real,sum.imag);
		
	return 0;
}

Complex cconst(int re ,int im)
{
	Complex x;
	x.real=re;
	x.imag=im;
	return x;
	
}
double cabsolute (Complex z )
{
	return sqrt(z.imag*z.imag+z.real*z.real);
}

