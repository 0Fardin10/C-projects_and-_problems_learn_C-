#include <stdio.h>
#include <stdlib.h>

int main()
{
   float income, tax= 0;
   printf("Enter  your  income: \n");
   scanf("%f",&income);

  if(income<=25000){
tax = 0;
  }

  else if(income>250000 && income<=500000){
    tax= 0.5*(income-250000);
   }
else if(income>500000 && income<=1000000){
    tax= 0.5*(income-250000)+0.2*(income-500000);
   }
   else {
    tax= 0.5*(500000-250000)+0.2*(1000000-500000)+0.3*(income-1000000);
   }
   printf("The  total tax you need  to pay is:  %f\n",tax);
    return 0;
}
