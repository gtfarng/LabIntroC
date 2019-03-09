#include<stdio.h>
#include<string.h>
int main()
{
	struct
	{
		char name[60];
		char id[13];
		int Age;
	}p1,p2;
	
	strcpy(p1.name,"Nadech Naraknaya");
	strcpy(p1.id,"3100500511001");
	p1.Age=21;
	
	printf("Enter Name: ");
	gets(p2.name);
	printf("Enter ID: ");
	gets(p2.id);
	printf("Enter Age: ");
	scanf("%d",&p2.Age);
	
	printf("P1\n");
	printf("ID = %s\n",p1.id);
	printf("Name = %s\n",p1.name);
	printf("Age = %d\n",p1.Age);
	
	printf("P2\n");
	printf("ID = %s\n",p2.id);
	printf("Name = %s\n",p2.name);
	printf("Age = %d\n",p2.Age);
	
	
	
	return 0;
}
