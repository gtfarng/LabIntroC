#include <stdio.h>
int main () 
{
   char ch;	
   printf("Enter Char: ");
   scanf("%c",&ch);
   getchar();
   
   if(ch=='Y')
    	printf("=> Y\n");
   else if(ch=='N')
    	printf("=> N\n");
   else
    	printf("=> NOT\n");
    	
   return 0;
}
