#include<stdio.h>
int main()
{ 	//Jatupat Pannoi 5735512002
    int x,y;
    printf("Enter X: ");
    scanf("%d",&x);

    printf("Enter Y: ");
    scanf("%d",&y);
    
    printf("X+Y = %d \n",x+y);
    printf("Y+X = %d \n",y+x);
    printf("X-Y = %d \n",x-y);
    printf("Y-X = %d \n",y-x);
    printf("X*Y = %d \n",x*y);
    printf("Y*X = %d \n",y*x);
    printf("X/Y = %d \n",x/y);
    printf("Y/X = %d \n",y/x);
    printf("X%%Y = %d \n",x%y);
    printf("Y%%X = %d \n",y%x);
    printf("X*Y+X = %d \n",x*y+x);
    printf("X*(Y+X) = %d \n",x*(y+x));
    
	getch();
	return 0;	
}
