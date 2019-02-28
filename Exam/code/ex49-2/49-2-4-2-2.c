#include<stdio.h>
int main()
{
 	int a=10,b=1;
 	while(a>=0)
 	{
 		b++;
 		a-=3;
	 }
	 printf("%d\n",++b);
	
	return 0;
}
