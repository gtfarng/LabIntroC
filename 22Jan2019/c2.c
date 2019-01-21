#include<stdio.h>
int main()
{   //Jatupat Pannoi ID 5735512002
	 int ndays, week, day;    
	 int nyear,nmonth,nweek,nday;
	 
	 printf("Input number of days : ");    
	 scanf("%d",&ndays);       
	/* 
	 week=  ndays/7;    
	 day= ndays%7;     
	 
	 printf("It is equivalent to %d  weeks and",week);    
	 printf(" %d days.\n",day); 
	*/
	nyear=ndays/365; //total year
	day=ndays%365; //total day
	nmonth=day/30; //total day - total month
	nweek=(day%30)/7; //total day - total week
	nday=(day%30)%7;  //total day
	
	printf("It is equivalent to %d year, ",nyear);    
	printf("%d month, ",nmonth); 
	printf("%d week and %d day.\n",nweek,nday); 

	getch();
	/*system("PAUSE");
	printf("\n");*/
	return 0;
}
