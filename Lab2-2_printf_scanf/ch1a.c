#include<stdio.h> 
#include<stdlib.h> 
int main() 
{   
 	 char course1[] = "Physics I";
	 char course2[] = "Math I";          
         char course3[] = "Chemistry";   
	 char course4[] = "Intro to CPT";  
	 char course5[] = "Table Tennis";   
	             
	 int credit1=3, sec1=3;     	 
	 int credit2=3, sec2=12;   	
	 int credit3=3, sec3=5;    
	 int credit4=3, sec4=8;    	  
	 int credit5=1, sec5=4;     
	 
	 char grade1=0, grade2=0, grade3=0, grade4=0, grade5=0;     
	 float gpa=0.0, totalcredits=1.0; 
	 int num[]={1,2,3,4,5};
	            
	 printf("Enter grade(A-E) for each course\n");       
	 printf("%d.%s\n\tGrade\t: ",num[0],course1);      
	 scanf("%c",&grade1);
	 getchar();
	 printf("%d.%s\n\tGrade\t: ",num[1],course2);  
	 scanf("%c",&grade2);
	 getchar();
	 printf("%d.%s\n\tGrade\t: ",num[2],course3);  
	 scanf("%c",&grade3);
	 getchar();
	 printf("%d.%s\n\tGrade\t: ",num[3],course4);  
	 scanf("%c",&grade4);
	 getchar(); 
	 printf("%d.%s\n\tGrade\t: ",num[4],course5);  
         scanf("%c",&grade5);
	 getchar();
    printf("---------------------------------------------------------");
    printf("\n \t\t GRADE REPORT\t\t\t\t|\n");     
	printf("---------------------------------------------------------\n");     
	printf("#   Course\t\t\tSection\tCredit\tGrade\t|\n");     
	printf("---------------------------------------------------------\n");     
	printf("1  %-25s \t%d\t%d\t%c\t|\n",course1,sec1,credit1,grade1);     
	printf("2  %-25s \t%d\t%d\t%c\t|\n",course2,sec2,credit2,grade2);     
	printf("3  %-25s \t%d\t%d\t%c\t|\n",course3,sec3,credit3,grade3);     
	printf("4  %-25s \t%d\t%d\t%c\t|\n",course4,sec4,credit4,grade4);     
	printf("5  %-25s \t%d\t%d\t%c\t|\n",course5,sec5,credit5,grade5);     
	printf("---------------------------------------------------------\n\n"); 
 
    totalcredits = credit1+credit2+credit3+credit4+credit5 ;    
 
   
   gpa = ( credit1*('E'-grade1)+credit2*('E'-grade2)+
         credit3*('E'-grade3)+ credit4*('E'-grade4)+ 
		 credit5*('E'-grade5) )/totalcredits; 
    printf("---------------------------------------------------------");
    printf("\n  GPA = %.2f\t\t\t\t\t\t|\n",gpa);          
	printf("---------------------------------------------------------\n\n");
	         
	return 0; 
} 
