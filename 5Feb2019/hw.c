#include<stdio.h>
int main()
{   float total,cal;

    printf("Enter Total sales: ");
    scanf("%f",&total);

    if(total<1000)
   {
      cal = total*0.05;
   }
   else if(total>=1000&&total<=5000)
   {
      cal =total*0.07;
   }
  else if(total>5000)
   {
      cal = total*0.10;
   }
   printf("Total sales = %.2f and Commission = %.2f \n",total,cal);
 




      return 0;
}
