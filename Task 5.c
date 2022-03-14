#include<stdio.h>
//Hint:C=(F-32)*5/9

int main()

{
   float C, F;

   printf("Enter the value of Fahrenheit: ");
   scanf("%f",&F);

   C=(F-32)*5/9;

   printf("The value of Celsius=%.1f",C);

   return 0;
}
