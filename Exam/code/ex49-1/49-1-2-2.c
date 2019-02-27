#include<stdio.h>
int main()
{
	int std,i=0,sum[5]={0,0,0,0,0};
	printf("--------------------------------------------\n");
	printf("Type\tlist\n");
	printf("--------------------------------------------\n");
	printf("1\tIce-Cream\n");
	printf("2\tIce\n");
	printf("3\tWedge\n");
	printf("4\tMock Pomegranate in Coconut Syrup\n");
 	printf("5\tPoppy Lotus\n");
 	printf("--------------------------------------------\n");
 	while(i<10)
 	{
 		printf("Enter list to order of Student %d :",i+1);
 		scanf("%d",&std);
 		switch(std)
 		{
 			case 1: sum[0]++;
 			break;
 			case 2: sum[1]++;
 			break;
 			case 3: sum[2]++;
 			break;
 			case 4: sum[3]++;
 			break;
 			case 5: sum[4]++;
 			break;
		 }
 		i++;
 	}
 	printf("--------------------------------------------\n");
 	printf("Total list\n");
 	printf("--------------------------------------------\n");
	printf("1.Ice-Cream : %d items \n",sum[0]);
	printf("2.Ice : %d items\n",sum[1]);
	printf("3.Wedge : %d items\n",sum[2]);
	printf("4.Mock Pomegranate in Coconut Syrup : %d items\n",sum[3]);
 	printf("5.Poppy Lotus : %d items\n",sum[4]);
 	printf("--------------------------------------------\n");
 	
 	
		
	
	return 0;
}
