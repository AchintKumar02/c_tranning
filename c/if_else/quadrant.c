/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main (){

  int x, y;
    printf("Enter the value of coordinate point  x and y :-> ");
    scanf("%d %d", &x, &y);

  if (x > 0 && y > 0){
      printf("The point lies on the first quardrant");
  }
     else if  (x > 0 && y < 0){
      printf("The point lies on the second quardrant");
  }  
    else if (x < 0 && y < 0){
      printf("The point lies on the third quardrant");
  }
     else {
      printf("The point lies on the fourth quardrant");
  }
  
  return 0;
 }
