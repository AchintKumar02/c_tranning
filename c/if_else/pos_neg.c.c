/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int num;
   printf("Enter the num");
   scanf("%d", &num);
   
   if (0 < &num)
   printf("The num is positive");

   else 
   printf("The num is negative");
   
    return 0;
}


