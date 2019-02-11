#include<stdio.h>
int main()
{
	int Number[10],i,max=0,min=0;
	for(i=0;i<10;i++)
	{
		printf("Enter Number[%d] :",i );
		scanf("%d",&Number[i]);
	}
	min=Number[0];
	for(i=0;i<10;i++)
    { 
	    if(min>Number[i])
        { 
            min=Number[i]; 
        }
    }
	printf("Minimum Number = %d\n",min);
	max=Number[0];
    for(i=0;i<10;i++)
    {  
        if(max<Number[i])
        { 
            max=Number[i]; 
        }
    
	}
	printf("Maximum Number = %d\n",max);
	

	return 0;
}
