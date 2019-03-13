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
	
void showStudent(student stds[],int n); 
void setStatus(student stds[],int n);  
float maxGPA(student stds[]);
float avgGPA(student stds[]);
int countCritical(student stds[]);   

int main()
{
	int i;
	student data[TOTAL];
		
	printf("Enter new data\n");
	for(i=0;i<TOTAL;i++)
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
	
	setStatus(data,TOTAL);
	showStudent(data,TOTAL);
	
	printf("\nGPA of Student is Maximum = %.2f",maxGPA(data));
	printf("\nAverage GPA of Student = %.2f",avgGPA(data));
	printf("\nTotal of Student is Status Critical = %d",countCritical(data));
	
	return 0;
}

void showStudent(student stds[],int n)
{
	int i;
	printf("\nAll Student\n");
	for(i=0;i<n;i++)
	{
		printf("%10s  %s\tGPA = %.2f\tstatus = %s\n",stds[i].stdcode,stds[i].name,stds[i].gpa,stds[i].status);
	}	
}

void setStatus(student stds[],int n)   
 {
 	int i;
 	
 	for(i=0;i<TOTAL;i++)
 	{
 		if(stds[i].gpa>=3.50&&stds[i].gpa<=4.00)
 		 	strcpy(stds[i].status,"Excellent");
 		else if(stds[i].gpa>=2.00&&stds[i].gpa<3.50)
 		 	strcpy(stds[i].status,"Pass");
 		else if(stds[i].gpa>=1.50&&stds[i].gpa<2.00)
 		 	strcpy(stds[i].status,"Critical");
 		else if(stds[i].gpa>=0.00&&stds[i].gpa<=1.50)
 		 	strcpy(stds[i].status,"Fail");
 	}	
 }
 
float maxGPA(student stds[])
{
	float max;
	int i;
	
	max=stds[0].gpa;
	
	for(i=0;i<4;i++)
	 	if(stds[i].gpa>max)
	 	  	max=stds[i].gpa;
	 	
	return max;
	
}

float avgGPA(student stds[])
{
	float avg=0;
	int i;
	
	for(i=0;i<4;i++)
	 	avg+=stds[i].gpa;
	 	
	return avg/4;
	 	
	
}

int countCritical(student stds[])
{
	int i,count=0;
	
	for(i=0;i<4;i++)
	 	if(stds[i].gpa>=1.50&&stds[i].gpa<2.00)
	 	 	count++;
	 	
	return count;
	
} 
