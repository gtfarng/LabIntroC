#include<stdio.h>
int main()
{
 	int i,j,num[5],tmp;
 	char key;
 	for(i=0;i<5; i++)
    {
             printf("Enter Number [%d]:",i+1);    
			 scanf("%d",&num[i]);
    }


  	printf("\nNumber in Sort : ");
  	for(i=0;i<5;i++)
    {
     	printf("%5d",num[i]);
    }
 	
	for(i=0;i<5-1;i++)
       for(j=0;j<5-1;j++)
       {
                  
            if(num[j]<num[j+1])
            {
                tmp=num[j];
                num[j]=num[j+1];
                num[j+1]=tmp;
             }
                            
       }
  	
	printf("\nSort Max to Min : ");
  	for(j=0;j<5;j++)
    {
        printf("%5d",num[j]);
    }
          
    for(i=0; i<5-1; i++)
       for(j=0;j<5-1;j++)
        {
                  
                     
            if(num[j]>num[j+1])
            {
                tmp=num[j];
                num[j]=num[j+1];
                num[j+1]=tmp;
            }
                       
        }
    printf("\nSort Min to Max : ");
  	for(j=0;j<5;j++)
    {
        printf("%5d",num[j]);
    }
 				return 0;
}

