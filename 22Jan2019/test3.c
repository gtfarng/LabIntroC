#include<stdio.h>
#include<stdlib.h>
int main()
{   //Jatupat Pannoi ID 5735512002
	char name[20];
	float grade;      
	int sec;      
	
	printf("Enter your name: ");      
	scanf("%s",name);      
	printf("Enter your section: ");      
	scanf("%d",&sec);      
	printf("Enter your GPA: ");      
	scanf("%f",&grade);      
	printf("Hello %s, ",name);      
	printf("Your section is %d and GPA is %.2f\n", sec,grade);
	
	
	getch();
	/*system("PAUSE");
	printf("\n");*/
	return 0;
}
