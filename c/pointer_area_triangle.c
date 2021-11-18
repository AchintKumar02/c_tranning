/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/**If the lengths of the sides of a triangle are denoted by a, b, and c,
then area of triangle is given by

area = wholeroot S(S - a)(S - b)(S - c)
where, S = ( a + b + c ) / 2. Write a function to calculate the area of
the triangle.**/
#include <stdio.h>
#include<math.h>
void areatr(int *, int * , int *);
int a , b, c, S;
int main(){
    printf("The area of triangle:\n");
    printf (" Enter the three value: \n");
    printf ("\nfirst value: ");
    scanf ("%d", &a);
    printf ("\n sec value: ");
    scanf ("%d", &b);
    printf ("\n third value: ");
    scanf ("%d", &c);
    printf ("\n The values are: %d, %d, %d ", a, b, c);
    areatr(&a,&b,&c);
}
void areatr(int *x, int *y, int *z){
    float S,ar;

    S = (*x+*y+*z)/2.0;

    ar = sqrt(S*(S-*x)*(S-*y)*(S-*z));

    printf("Area of Triangle: %f",ar);
}