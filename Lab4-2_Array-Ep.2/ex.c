#include<stdio.h>
int main()
{ 
   float books[2][5][3];
   int i,j,k;
   float maxprice,minpage,weight;
	
	for(i=0;i<2;i++)
	{
	   printf("\nBook level %d",i);
   	   for(j=0;j<5;j++)
	   {
	      printf("\nBook position %d\n",j);
	     {
		 for(k=0;k<3;k++)
		 {
	     if(k==0)
		 {
		  printf("Enter price :");
		  scanf("%f",&books[i][j][k]);
		 }
		 else if (k==1)
		 {
		  printf("Enter pages :");
		  scanf("%f",&books[i][j][k]);
		 }
		 else
		 {
		  printf("Enter Weight :");
		  scanf("%f",&books[i][j][k]);
		 }
	     }
	
         }
       }
    }  
	
	for(i=0;i<2;i++)
	{
	    printf("\n\nBooks level : %d \n",i);
	    for(j=0;j<5;j++)
		{
	       printf("\nBooks position : %d",j);
	    { 
		for(k=0;k<3;k++)
		{
	      if(k==0)
	      {
	        printf("   price : %4.2f",books[i][j][k]);
		  }
	      else if (k==1)
	      {
		    printf("   pages : %.f",books[i][j][k]);
		  }
	      else
 	      {
 	      	
		    printf("   Weight : %4.2f",books[i][j][k]);
	      }
	    }  	
	    }	
	    }
	    printf("\n"); 
    }
	
	maxprice=books[0][0][0];
	for(i=0;i<2;i++)
	{
	  for(j=0;j<5;j++)
	  {
	    for(k=0;k<3;k++)
		{  
		  if(maxprice<books[i][j][0])
		   {
		   
	         maxprice=books[i][j][0];
		   }
		
		}
	  
	  }
	}
	printf("MaxPrice Of Book = %.2f\n",maxprice);


     minpage=books[0][0][1];
	for(i=0;i<2;i++)
	{
	  for(j=0;j<5;j++)
	  {
	    for(k=0;k<3;k++)
		{  
		  if(minpage>books[i][j][1])
		   {
		   
	         minpage=books[i][j][1];
		   }
		
		}
	  
	  }
	}
	printf("MinPage Of Book = %.0f\n",minpage);
	
	float x=0,y=0;
	for(i=0;i<2;i++)
	{
	  for(j=0;j<5;j++)
	  {
		  x+=books[i][j][2];
	  }
	   printf("AvgWeight Of Level %d = %.1f\n",i,x/5.0); 
	   x=0;
	}


	return 0;
}
