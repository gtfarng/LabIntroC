#include<stdio.h>
int add2 (int x);
int minus2 (int x);
int main()
{
	int i,a[4];
	for(i=0;i<4;i++)
	{
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<4;i++)
	{
		if(a[i]>=0)
		{
			
			printf("a[%d] = %d ",i,add2(a[i]));
		}	
		else if (a[i]<0)
		 {
		 	
		 	printf("a[%d] = %d ",i,minus2(a[i]));
		 }
		 printf("\n");
		
	}
	
	return 0;
}
int add2 (int x)
{
	return x+2;
}

int minus2 (int x)
{
	return x-2;
}
