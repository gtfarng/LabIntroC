#include<stdio.h>
#include<string.h>
#define TOTAL 4
typedef struct 
	{
		char stdcode[10];
		char name[60];
		float gpa;
		char status[15];
	} student;
void showStudent(student st[]); 
void setStatus(student st[]);     
int main()
{
	int i;
	student data[TOTAL];
		
	printf("Enter new data\n");
	for(i=0;i<4;i++)
	{
		printf("student %d\n",i+1);
		printf("Code: ");
		gets(data[i].stdcode);
		fflush(stdin);
		printf("Name: ");
		gets(data[i].name);
		fflush(stdin);
		printf("GPA: ");
		scanf("%f",&data[i].gpa);	
		fflush(stdin);	
	}
	
	setStatus(data);
	showStudent(data);
	
	return 0;
}
void showStudent(student st[])
{
	int i;
	printf("\nAll Student\n");
	for(i=0;i<TOTAL;i++)
	{
		printf("%10s  %s\tGPA = %.2f\tstatus = %s\n",st[i].stdcode,st[i].name,st[i].gpa,st[i].status);
	}	
}
void setStatus(student st[])   
 {
 	int i;
 	
 	for(i=0;i<TOTAL;i++)
 	{
 		if(st[i].gpa>=3.50&&st[i].gpa<=4.00)
 		 	strcpy(st[i].status,"Excellent");
 		else if(st[i].gpa>=2.00&&st[i].gpa<3.50)
 		 	strcpy(st[i].status,"Pass");
 		else if(st[i].gpa>=1.50&&st[i].gpa<2.00)
 		 	strcpy(st[i].status,"Critical");
 		else if(st[i].gpa>=0.00&&st[i].gpa<=1.50)
 		 	strcpy(st[i].status,"Fail");
 	}
 	
 }
