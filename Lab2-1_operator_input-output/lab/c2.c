#include<stdio.h>
int main()
{  int nnday,nday=0,nyear=0,nmonth=0,nweek=0;

   printf("Please enter number of day: ");
   scanf("%d",&nnday);
    
   nyear=nnday/365;
   nday=nnday%365;
   nmonth=nday/30;
   nweek=(nday%30)/7;
   nday=(nday%30)%7;
     
   printf("It is equivalent to %d year,",nyear);
   printf(" %d month, %d week and %d day\n",nmonth,nweek,nday);

   return 0;
}
