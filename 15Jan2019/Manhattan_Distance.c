#include<stdio.h>
#include<stdlib.h>
int main()
{ 	//Jatupat Pannoi 5735512002
	int x1,x2,y1,y2,man_dist;
	printf("Calculate Manhattan distance\n");
	printf("Enter X1: ");
	scanf("%d",&x1);
	printf("Enter Y1: ");
	scanf("%d",&y1);
	printf("Enter X2: ");
	scanf("%d",&x2);
	printf("Enter Y2: ");
	scanf("%d",&y2);
	man_dist=abs(x1-x2)+abs(y1-y2);
	printf("Distance From (%d,%d) to (%d,%d) = %d \n\n",x1,y1,x2,y2,man_dist);

	getch();
	return 0;	

}
