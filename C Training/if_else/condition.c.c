/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int age;
   printf("Enter the age of the candidate");
   scanf("%d", &age);
   
   if (age >= 18)
   printf("The candidate is eligible to cast his/her vote");

   else 
   printf("The candidate is not eligible to cast his/her vote");
   
    return 0;
}


