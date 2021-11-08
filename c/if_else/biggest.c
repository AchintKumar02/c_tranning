/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>

int main (){
  int gret, num1, num2, num3;
  printf("Enter the values of the numbers");
  scanf("%d %d %d", &num1, &num2, &num3);

  if (num1 > num2 && num1 > num3){
      gret = num1;
    }
  else if (num2 > num2 && num2 > num3){
      gret = num2;
    }
  else if (num3 > num1 && num3 > num2){
    gret = num3;
  }
  printf("The greatest num is %d",gret);
  return 0;
}
