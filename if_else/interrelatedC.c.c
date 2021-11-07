/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main (){

  int m, n;
  printf ("Enter the value of m");
  scanf ("%d", &m);

  if (m > 0){
      printf ("The value of n = 1");
    } else if (m == 0){
      printf ("The value of n = 0");
    } else if (m < 0){
      printf ("The value of n = -1");
    }
  return 0;
 }
