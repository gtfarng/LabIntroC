#include<stdio.h>
#include<string.h>
#define TOTAL 4
typedef struct 
	{
		char stdcode[10];
		char name[60];
		float gpa;
	} student;
void showStudent(student st[]); 
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
	
	showStudent(data);
	
	return 0;
}
void showStudent(student st[])
{
	int i;
	printf("\nAll Student\n");
	for(i=0;i<TOTAL;i++)
	{
		printf("%10s  %s\tGPA= %.2f\n",st[i].stdcode,st[i].name,st[i].gpa);
	}	
}
