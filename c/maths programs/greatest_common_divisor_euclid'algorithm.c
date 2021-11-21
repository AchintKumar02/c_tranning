/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/


/*Write a function to compute the greatest common divisor given by
Euclid’s algorithm, exemplified for J = 1980, K = 1617 as follows:
a       b      c         a       c   b      d
1980 / 1617 = 1         1980 – 1 * 1617 = 363
1617 / 363 = 4          1617 – 4 * 363 = 165
363 / 165 = 2           363 – 2 * 165 = 33
5 / 33 = 5              165 – 5 * 33 = 0

Thus, the greatest common divisor is 33. */
#include <stdio.h>
int main(){
    int x, y, a, b, c, d = 1, i = 1;
    printf("Enter two positive integers a and b :\n");
    scanf("%d %d", &a, &b);
    printf("Finding the greatest common divisor through euclid's algorithm :\n");
    printf("*********************************************************************");
    x = a;
    y = b;
    while (d > 0){
        c = a / b;
        d = a - c * b;
        a = b;
        b = d;
        
    }
    printf("\nThe greatest common divisor of %d and %d is %d",x, y, a);
    return 0;
}
