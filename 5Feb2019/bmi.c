#include<stdio.h>
//#include<math.h>
int main()
{   float weight,height,bmi=0;
  //  double height2;
  
    printf("Enter your weight:(Kg.): ");
    scanf("%f",&weight);
    printf("Enter your height:(M.): ");
    scanf("%f",&height);
   // height2=pow(5,2);
    bmi=weight/(height*height);
    printf("You Bmi = %.2f\n",bmi);    
    if(bmi<18.5)
       printf("You Underweight\n");
    else if(bmi>=18.5&&bmi<25)
       printf("You Normal\n");
    else if(bmi>=25&&bmi<=30)
       printf("You Overweight\n");
    else if(bmi>30)
       printf("You Obese\n");

    




   return 0;
}
