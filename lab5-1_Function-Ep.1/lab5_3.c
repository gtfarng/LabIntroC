#include<stdio.h>
void myfunc(void);
void main()
{
 	printf("Hello, from main()\n");
	myfunc();
	printf("Hello, after calling myfunc()\n");
	
//	system("PAUSE");

}
void myfunc() 
{ 

 	printf("Hello, from myfunc()\n"); 

}
