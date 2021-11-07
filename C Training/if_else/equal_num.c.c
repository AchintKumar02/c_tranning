/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int num1, num2;
   printf("Enter the two integer");
   scanf("%d %d", &num1, &num2);
   
   if (num1==num2)
   printf("The two integers are equal");

   else 
   printf("The two integers are not equal");
   
    return 0;
}

