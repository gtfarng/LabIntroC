#include<stdio.h>
#include<string.h>

struct student{
           char stdcode[11];
           char name[60];
           float gpa;
           char status[15];
};

void showStudent(struct student stds[], int n);
int main ()
{
    struct student stds[5];   
    int num,i;
    
    printf("Enter number of student: "); 
	scanf("%d",&num);
	fflush(stdin);
    printf("Enter new data\n");
    for(i=0;i<num;i++)
	{
       printf("Student%d\n",i+1);
       printf("Code: "); 
	   gets(stds[i].stdcode); 
	   fflush(stdin);
       printf("Name: "); 
	   gets(stds[i].name); 
	   fflush(stdin);
       printf("GPA: "); 
	   scanf("%f",&stds[i].gpa); 
	   fflush(stdin);
    }
    
	printf("\nAll students\n");
    showStudent(stds,num);
  
    return 0;
}

void showStudent(struct student stds[], int n)
{
     int i;
     
     for(i=0;i<n;i++)
	 {
     printf("%-9s %-15sGPA=%.2f\n",stds[i].stdcode,stds[i].name,stds[i].gpa);
     }
}
