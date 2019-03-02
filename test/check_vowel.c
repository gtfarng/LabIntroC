#include<stdio.h>
#include<string.h>
int main()
{
     char name[50];
     int count,lename,x=0,y=0;
     printf("Enter your name :");
    // gets(name);
     scanf("%s",name);
     lename=strlen(name);
     printf("Convate Name:");
     for (count=0;count<lename;count++)
	 {
          printf("%c ",name[count]);
               if ((name[count]=='a')||(name[count]=='e')||(name[count]=='i')||(name[count]=='o')||(name[count]=='u'))
                    x++;
               else
                    y++;
          }
     printf("\nYou  Name are %d Letter",lename);
     printf("\nVowel  =%d",x);
     printf("\nLetter =%d",y);
     printf("\nEnd");
     
     return 0;
}
