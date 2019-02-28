#include<stdio.h>
#include<string.h>
int main()
{
	int i,age,M=0,F=0;
	float avg=0;
	char sex,m,f;
	
//	m=strcpy(m,"M");
//	f=strcpy(f,"F");
	
	for(i=0;i<5;i++)
	{
		printf("Student number %d: ",i+1);
		scanf("%c",&sex);
		getchar();
		scanf("%d",&age);
		avg+=age;
		/*
		if(strcmp(sex,m)==0)
		{
				M++;
		}
		else if(strcmp(sex,f)==0)
		{
				F++;
		}
		 */
	}
	
	printf("Total Male: %d Female: %d Average aage : %.1f",M,F,avg/5);
	
	return 0;
}
