#include <stdio.h>

int main() {
   int amount;
   float collection,sales;
   char month[15];
   printf("Enter total amount collected(-1 to quit): ");
   scanf("%d",&amount);
   while(amount!=-1){
      printf("Enter name of month: ");
      scanf("%s",&month);

      collection=(float)amount;
      sales=collection*100/109;
      printf("Total Collections: %.2f\n",collection);
      printf("Sales: %.2f\n",sales);
      printf("Country Sales Tax: %.2f\n",sales*0.05);
      printf("State Sales Tax: %.2f\n",sales*0.04);
      printf("Total Sales Tax Collected: %.2f\n\n",sales*0.09);
      printf("Enter total amount collected(-1 to quit): ");
      scanf("%d",&amount);
   }
   return 0;
}
