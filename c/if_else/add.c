/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main ()
{
  int num, sum, rem;
  num = 11111;
  int orignalNum = num;

  rem = num % 10;		//*1*//
  sum = sum + rem;
  num = num / 10;

  rem = num % 10;
  sum = sum + rem;
  num = num / 10;

  rem = num % 10;
  sum = sum + rem;
  num = num / 10;

  rem = num % 10;
  sum = sum + rem;
  num = num / 10;

  rem = num % 10;
  sum = sum + rem;
  num = num / 10;
  printf ("The Sum of the Digit of num %d is %d number", orignalNum, sum);

  return 0;
}

