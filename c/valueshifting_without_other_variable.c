/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main (){
  int a, b;
  printf("Enter the value of a:->");
  scanf ("%d", &a);
  printf("Enter the value of b:->");
  scanf ("%d", &b);

  b = a + b ;
  a = b - a ;
  b = b - a ;

  printf("your ans a = %d", a);

  printf("\nyour ans b = %d", b);



  return 0;
}
