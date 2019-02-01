//labarrayex2_2.c
#include <stdio.h>
#include <string.h>
int main()
{
 	char A[20] = "Monday";
 	char B[20] = "Tuesday and Sunday";
 	char C[20] = "Friday";

 	printf("Length of A : %d\n",strlen(A));
 	printf("Length of B : %d\n",strlen(B));
 	printf("Length of C : %d\n",strlen(C));

 	printf("Compare between A and B : %d\n",strcmp(A,B));
 	printf("Compare between B and C : %d\n",strcmp(B,C));
 	printf("Compare between A and A : %d\n",strcmp(A,A));
 	return 0;
}
