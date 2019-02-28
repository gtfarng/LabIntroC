#include<stdio.h>
int main()
{
 	int score=100;
 	score=score/10;
 	switch(score)
 	{
 		case 10: printf("Grade:A\n");
 		case 9: printf("Grade:A\n");
 		 		break;
 		case 8: printf("Grade:B\n");
 		 		break;
 		case 7: printf("Grade:C\n");
 		 		break;
 		case 6: printf("Grade:D\n");
 		 		break;
 		default: printf("Grade:E\n");
 		 		break;	
	 } 	
	
	return 0;
}
