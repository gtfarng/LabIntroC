#include <math.h>
#include <stdio.h>

typedef struct 
{	
 	double re;
	double im;
}complex;

complex cconst(double a,double b);
complex cadd(complex a,complex b);
complex csub(complex a,complex b);

int main()  
{ 
 	complex var1, var2, var3;
   	double x, y;
    x=10;
   	y=20;
 
 	var1=cconst(x, y);
 	
	printf("\nVar1 is Complex number of [x=%7.2lf,=%7.2lf]\n",var1.re,var1.im);
  	x=var1.re - 1;

 	var2=cconst(x, var1.im);
 	printf("Var2 is Var1.re - 1,Var1.im [x=%7.2lf, y=%7.2lf]\n",var2.re,                                                      
                                                       var2.im);
 	printf("\n");
	var3=cadd(var1, var2);
 	printf("Value of Var1 + Var2 [x=%7.2lf, y=%7.2lf]\n",var3.re, var3.im);

 	var3=csub(var1, var2);
 	printf("Value of Var1 - Var2 [x=%7.2lf, y=%7.2lf]\n",var3.re, var3.im);
 	
 	return 0;
}

complex cconst(double a,double b)
{	complex x;
	x.re = a;
	x.im = b;
	return x;
}

complex cadd(complex a,complex b)
{	complex x;                  /* (a+bi)+(c+di) = (a+c) + i(b+d) */
	x.re = a.re + b.re;
	x.im = a.im + b.im;
	return x;
}

complex csub(complex a,complex b)
{	complex x;                  /* (a+bi)-(c+di) = (a-c) + i(b-d) */
	x.re = a.re - b.re;
	x.im = a.im - b.im;
	return x;
}

