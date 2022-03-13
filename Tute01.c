/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int subject_1,subject_2;
  float calculate,average;

  printf("subject 1 marks :");
  scanf("%d",&subject_1);

  printf("subject 2 marks :");
  scanf("%d",&subject_2);

  calculate = subject_1 + subject_2;
  average = calculate/2;

  printf("calculate = %.2f\naverage = %.2f",calculate,average);
  
  return 0;
}

