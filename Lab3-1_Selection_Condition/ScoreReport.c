#include<stdio.h> 
int main()  
{ 
   int score; 
   double grade; 
  
   printf("Enter your score (0 - 20): "); 
   scanf("%d", &score); 

   grade = score/4; 

   switch((int)grade) 
  { 
      case 5:
          printf("Excellent\n");
         break; 
      case 4: 
           printf("Very Good \n"); 
          break; 
      case 3: 
           printf("Good \n "); 
          break; 
      case 2: 
           printf("Fair \n "); 
           break;
      case 1:
           printf("Fail\n");
         break;
      case 0:
           printf("Fail\n");
        break;
      default:
           printf("Out of range\n");
          break;  
} 
      return 0; 
} 
