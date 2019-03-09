
#include<stdio.h> 
#include<string.h> 
int main() 
{   
 	char std[5][4][60]; 
 	int i,j;
	 
	for(i=0;i<5;i++)
	{
		printf("\nStudent %d\n",i+1);
	 	for(j=0;j<4;j++)
		 {
		 	if(j==0)
		 	{
		 		printf("Enter student’s first name: ");
		 		gets(std[i][0]);
			}
		 	else if(j==1)
		 	{
		 		printf("Enter student’s last name: ");
		 		gets(std[i][1]);
			}
		 	else if(j==2)
		 	{
		 		printf("Enter student’s Province of birth: ");
		 		gets(std[i][2]);
			 }
		 	else if(j==3)
		 	{
		 		printf("Enter student’s Year of birth: ");
		 		gets(std[i][3]);
			}
		 }	
	}      
	
		for(i=0;i<5;i++)
	{
		printf("\nStudent %d\n",i+1);
	 	for(j=0;j<4;j++)
		 {
		 	if(j==0)		 	
		 		printf("name: %s ",std[i][0]);
		 	else if(j==1)
		 		printf("%s \n",std[i][1]);
		 	else if(j==2)
		 		printf("Province of birth: %s\n",std[i][2]);
		 	else if(j==3)
		 		printf("Year of birth: %s\n",std[i][3]);
		 }	
	}     
	
	return 0; 
}
