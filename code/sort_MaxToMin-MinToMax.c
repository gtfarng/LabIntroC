#include<stdio.h>
#define MAX 100
int main()
{
	
 		int i,j,num[MAX],tmp,n;
 		
 		printf("Enter total Number :");
 		scanf("%d",&n);

 		for(i=0; i<n; i++)
       	{
             printf("Enter Number[%d]:",i+1);    
			 scanf("%d",&num[i]);
        }

 
 	   for(i=0;i<n-1;i++)
       for(j=0;j<n-1;j++)
           {
           	if(num[j]<num[j+1])
              {
                  tmp=num[j];
                  num[j]=num[j+1];
                  num[j+1]=tmp;
               }
           	
			} 

             
  		printf("\nNumber from Max to Min : ");
 		for(j=0;j<n;j++)
          {
                printf("%5d",num[j]);
          }
          
          
        for(i=0; i<n-1; i++)
        for(j=0;j<n-1;j++)
             {
              if(num[j]>num[j+1])
               {
                 tmp=num[j];
                 num[j]=num[j+1];
                 num[j+1]=tmp;
               }
                       
             }
             
             printf("\nNumber from Min to Max : ");
 		     for(j=0;j<n;j++)
             {
                printf("%5d",num[j]);
             }
          
          
return 0;
}
