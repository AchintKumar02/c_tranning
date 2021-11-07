/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main ()
{
  int num, rev, rem;
  num = 12345;
  int orignalNum = num;
  
  rem = num % 10;		//*1*//
  rev = rev * 10 + rem;
  num = num / 10;

  rem = num % 10;
   rev = rev * 10 + rem;
  num = num / 10;

  rem = num % 10;
   rev = rev * 10 + rem;
  num = num / 10;

  rem = num % 10;
   rev = rev * 10 + rem;
  num = num / 10;

  rem = num % 10;
   rev = rev * 10 + rem;
  num = num / 10;
  printf ("The Sum of the Digit of num %d is %d number", orignalNum, rev);

  return 0;
}