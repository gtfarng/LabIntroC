#include<stdio.h>
#include<string.h>
typedef struct {
 	char code[10];
 	char name[50];
 	int credit;
 	float grade;
} Subject;


int main()
{
	Subject s1; 
	float gpoints;
	
	Subject s2;
	strcmp(s2.code,"240-101");
	strcmp(s2.name,"intro to computer Programming");
	s2.credit=3;
	s2.grade=3.5;
	
	printf("Enter Code Subject1 : ");
	gets(s1.code);
	printf("Enter Name Subject1 : ");
	gets(s1.name);
	printf("Enter Credit Subject1 : ");
	scanf("%d",&s1.credit);
	printf("Enter Grade Subject1 : ");
	scanf("%f",&s1.grade);
	
	gpoints=((s1.grade*s1.credit)+(s2.grade*s2.credit))/(s1.credit+s2.credit);
	
	printf("Average Subject1 between Subject2 = %.2f\n",gpoints);
	printf("Subject1\n");
	printf("Code = %s\n",s1.code);
	printf("Name = %s\n",s1.name);
	printf("Credit = %d\n",s1.credit);
	printf("Grade = %.1f\n",s1.grade);
	
	Subject arrS[10]; 
 	int n, ecredits = 0 ;
 	
	 for(n=0; n<10 ;n++)
 	{ 
 	 	fflush(stdin);
	 	printf("Subject #%d: ",n+1);
 		gets(arrS[n].code);
 		fflush(stdin);
 		gets(arrS[n].name);
 		fflush(stdin);
 		scanf("%d", &arrS[n].credit);
 		fflush(stdin);
 		scanf("%d", &arrS[n].grade);
 		fflush(stdin);
 	}
 	
 	for(n=0; n<10 ;n++)
 	{ 
 	 	if(arrS[n].grade>0)
 	 	{
 	 		ecredits+=arrS[n].credit;
		  }
	 	 	
 	}

 	printf("Total credit from Subject arrS  = %d\n",ecredits);
	
	
	
	
	return 0;
}
