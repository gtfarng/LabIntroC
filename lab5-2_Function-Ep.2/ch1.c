#include <stdio.h>
#define TOTAL 100
void grading(int N, float score[100],  char grade[100]);  
int main() 
 {  
  	int i,n;
	float student[TOTAL];
  	char result[TOTAL];
  	
  	printf("Enter number of student N: ");
  	scanf("%d",&n);
  	
  	for(i=0;i<n;i++)
  	{	
	  printf("Score of student %d: ",i+1);
  	  scanf("%f",&student[i]);
 	}
 	
 	grading(n,student,result);
    printf("----------------------------------\n");
   	printf("Grade Report\tScore\tGrade\n");
   	 printf("----------------------------------\n");
  	for(i=0;i<n;i++)
  	{	
	  printf("Student %d\t%.1f\t%c\n",i+1,student[i],result[i]);
   	}
  	 printf("----------------------------------\n");
	return 0; 
} 

void grading(int N, float score[100],  char grade[100])
{
	int i;
	for(i=0;i<N;i++)
	{
		if(score[i]>=50&&score[i]<=100)
	 	 	grade[i]='P';
	 	else if(score[i]<50&&score[i]>=0)
	   		grade[i]='F';
	}
		
}
											  

