/*
 * pi_calc.c
 * author: Braulio Viveros
 * date: August 8th, 2024
 * purpose: 
 *  calculates the value of pi to a certain accuracy
 *  using Euler's infinite series of pi.
 *  the more terms used for the infinite series, the
 *  closer the approximation is to the true value of pi.
 * */
#include <stdio.h>
#include <math.h>

#define NINETY (90);

int main()
{
  int number_of_terms = 1;
  double sum_of_terms = 0;
  double x = 0;
  double exponent = 0.25;
  double pi_approx = 0;

  printf("Enter the number of terms used to calculate an approximation of pi:\n");
  scanf("%d", &number_of_terms);

  for(int i = 0; i < number_of_terms; i++){
    sum_of_terms += (1/pow(i+1,4.0));
  }

  x = sum_of_terms * NINETY;
  pi_approx = pow(x,exponent);

  printf("The approximation of pi using %d terms: %f\n", number_of_terms, pi_approx);

  return 0;
}