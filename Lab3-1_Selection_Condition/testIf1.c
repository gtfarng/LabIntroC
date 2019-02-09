#include<stdio.h> 
int main()  
{ 
     int num; 
  
     printf("num = "); 
     scanf("%d", &num); 

     if (num%2 == 0 && num<0) 
          printf("%d is negative even number\n",num); 
     else  if(num%2 == 0 && num >= 1)
          printf("%d is positive even number\n",num);
     else if(num%2 == -1 && num< 0)
          printf("%d is negative odd number\n",num);
     else if(num%2 ==1 && num>=0)
          printf("%d is positive odd number\n",num);     
     else if(num==0)
 	  printf("%d is number zero\n",num);
      printf("Good Bye\n"); 

  return 0; 
} 
