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

  if (m != 0){
      if (m > 0){
      n = 1;
    
    } else
      n = -1;
    } else
      n = 0;
    printf("The value of m = %d\n",m);
    printf("The value of n = %d\n",n);
  return 0;
 }
