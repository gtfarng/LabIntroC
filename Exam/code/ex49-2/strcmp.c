#include <stdio.h>
#include <string.h>

int main () 
{
   char str1[15];
   char str2[15];
   char m[1],f[1];
   char ch;
   
   printf("Enter Char: ");
   scanf("%c",&ch);
   getchar();
   

	/*
	
	strcpy(*str1,*str2)
	strcmp(*str1,*str2)
	strcat(*str1,*str2)
	strlen(*str)
	
	*/
	strcpy(m,"M");
//	getchar();
	strcpy(f,"F");
 //	getchar();
 
 char a = 'a';
char b = 'b';

if( a < b ) 
printf("%c is smaller than %c", a, b);
if( a > b ) 
printf("%c is smaller than %c", a, b);
if( a == 'b' ) 
printf("%c is equal to %c", a, b);
   
   
   
   strcpy(str1, "gtfarng");
   strcpy(str2, "lockerz");

   
   printf("strlen 1 = %d\n",strlen(str1));
   printf("strlen 2 = %d\n",strlen(str2));
   printf("strcmp = %d\n",strcmp(str1,"gtfarng"));
   printf("strcmp = %d\n",strcmp(str1,"GTFARNG"));
   printf("strcmp = %d\n",strcmp(str1,"lockerz"));
   printf("strcat = %s\n",strcat(str1,str2));
   printf("strcat = %s\n",strcat(str1,"lockerz"));
   printf("strcmp = %d\n",ch=='M');
   printf("strcmp = %d\n",ch=='F');
   
   return(0);
}
