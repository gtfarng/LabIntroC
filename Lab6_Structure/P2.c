#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	struct data
	{
		char stdcode[10];
		char name[60];
		float gpa;
	}person[4];
	
	printf("Enter new data\n");
	for(i=0;i<4;i++)
	{
		printf("student %d\n",i+1);
		printf("Code: ");
		gets(person[i].stdcode);
		fflush(stdin);
		printf("Name: ");
		gets(person[i].name);
		fflush(stdin);
		printf("GPA: ");
		scanf("%f",&person[i].gpa);	
		fflush(stdin);	
	}
	
	printf("\nAll Student\n");
	for(i=0;i<4;i++)
	{
		printf("%10s  %s\tGPA= %.2f\n",person[i].stdcode,person[i].name,person[i].gpa);
	}
	
		
	
	return 0;
}
