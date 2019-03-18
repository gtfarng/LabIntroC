#include<stdio.h>
#include<string.h>

typedef struct
{  		
 		char stdcode[11];
		char name[60];
		float gpa;
		 	
} student;

int main()
{
 	student stds[4];
	int i;
	
	printf("Enter new data\n");
	for(i=0;i<4;i++)
	{
		fflush(stdin);
		printf("Student%d\n",i+1);
		printf("Code : ",i+1);
	 	gets(stds[i].stdcode);
	 	fflush(stdin);
	 	printf("Name : ",i+1);
	 	gets(stds[i].name);
	 	fflush(stdin);
	 	printf("GPA : ",i+1);
	 	scanf("%f",&stds[i].gpa);
	 	fflush(stdin);
	 	
	}
	
	printf("\n");
	printf("All Students\n");

 	for(i=0;i<4;i++)
	{
		printf("%-10s\t%s\tGPA=%.2f\n",stds[i].stdcode,stds[i].name,stds[i].gpa);
	}

	return 0;
}
