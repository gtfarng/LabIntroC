#include<stdio.h>
#include<Math.h>
int main()
{
    int n,i,j,a,b;
   	printf("Enter Number :");
	scanf("%d",&n);
   	printf("Prime Number :");
	
    for(i=2;i<=n;i++)
 	{       
        a = sqrt(i);
        b = 1;        
       for(j=2;j<=a;j++)
        {  
		b = b&&!(i%j==0);          
        }
        	if(b==1)
         	 printf("%d ",i);
        
 	}   
  
    
    return 0;
}
