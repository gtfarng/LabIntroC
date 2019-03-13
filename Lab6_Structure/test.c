#include<stdio.h>
int main()
{
	struct address1
 	{	
 	 	char name[30];
 		char detail[50];
	 	int age;
	 	char telephone[10];
 	};
 	struct address1 input1, input2;

	struct  address2
 	{   char name[30];
	 	char detail[50];
	 	int age;
	 	char telephone[10];
 	} inputs1, inputs2;


 	struct 
   	{	char name[30];
		char detail[50];
		int age;
		char telephone[10];
   	} input;
   	
   	typedef  struct
	{ 
        char name[30];
		char detail[50];
		int age;
		char telephone[10];
   	} addresstype; 
   	addresstype inputss1, inputss2;


	
	return 0;
}
