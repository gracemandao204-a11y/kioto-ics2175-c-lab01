/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 03: Personalised Calculation
 *
 * Student Name: Malisa Grace Mandao
 * Registration Number: ENB211-0039/2025
 * Variant ID: V19   (assigned by your lecturer, e.g. V07)
 * Scenario: Study hours    (assigned by your lecturer)
 *
 * Instructions:
 *   - Record your assigned variant details above.
 *   - Use the two input values given for your variant.
 *   - Perform the required arithmetic operation.
 *   - Store the result in a meaningfully named variable.
 *   - Print the result using the required output label.
 */
#include <stdio.h>

int main() {
  int hours_per_day =3;
  int days =7;
  int total_study_hours =hours_per_day*days;

  printf("The total number of hours is %d ",total_study_hours);

   return 0;
}
