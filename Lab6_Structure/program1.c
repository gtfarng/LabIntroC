#include<stdio.h>
#include<string.h>
int main()
{
	struct person
	{
		char Name[60];
		char ID[16];
		int age;
		
	}p1,p2;
	
	strcpy(p1.Name,"Nadech Naraknaka");
	strcpy(p1.ID,"390980055876");
	p1.age=21;
	
	printf("Enter Name : ");
	gets(p2.Name);
	printf("Enter ID : ");
	gets(p2.ID);
	printf("Enter Age : ");
	scanf("%d",&p2.age);
	
	printf("\nP1\n");
	printf("Name : %s \n",p1.Name);
	printf("ID : %s \n",p1.ID);
	printf("Age : %d \n",p1.age);
	printf("\n");
	printf("\nP2\n");
	printf("Name : %s \n",p2.Name);
	printf("ID : %s \n",p2.ID);
	printf("Age : %d \n",p2.age);
	
	
	return 0;
}
