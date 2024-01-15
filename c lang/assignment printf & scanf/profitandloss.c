#include <stdio.h>

int main(){

   float cp, sp, profit;
   printf("Enter the cost price and selling price of banana per dozen: ");
   scanf("%f%f",&cp,&sp);
   profit = (sp-cp) * 25 / 12;
   printf("the profit earned on selling 25 banaa is %.3f",profit);

   printf("\n");
   return 0;

}