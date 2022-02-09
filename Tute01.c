/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int number1, number2;
  float avg;

  printf("Enter your number 1 value : ");
  scanf("%d", &number1);

  printf("Enter your number 2 value : ");
  scanf("%d", &number2);

  sum = number1 + number2;
  Printf("sum of number :  %d \n",sum);

  avg = sum/2.0;

  printf("Average of two integers : %.2f",avg);
  
  return 0;
}

