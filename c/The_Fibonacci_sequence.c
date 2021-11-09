/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//The Fibonacci sequence 
#include <stdio.h>
int main(){
   int num1, num2, num3, count;
   printf("Enter the  number of sequence:-\f");
   scanf("%d", &count);
   printf("\nEnter the first number of sequence:-\f");
   scanf("%d", &num1);
   printf("\n\n*************************\n\n");
   for (int i = num1; i < count; i++){
        num3 = i + (i + 1);
        printf("\nThe %dth num of is is Fibonacci is sequence %d", i, num3);
    }
    return 0;
}