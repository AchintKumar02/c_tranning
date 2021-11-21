/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*(a) Write a function that receives 5 integers and returns the sum,
average and standard deviation of these numbers. Call this function
from main( ) and print the results in main( ).*/
#include<stdio.h>
#include<math.h>
void func(int a, int b, int c, int d, int e, float *sum, float *avg, float *std_dev);

void main(){
    int a, b, c, d, e;
    float sum, avg, std_dev;

    printf("\nEnter 1st number: ");
    scanf("%d", &a);
    printf("\nEnter 2nd number: ");
    scanf("%d", &b);
    printf("\nEnter 3rd number: ");
    scanf("%d", &c);
    printf("\nEnter 4th number: ");
    scanf("%d", &d);
    printf("\nEnter 5th number: ");
    scanf("%d", &e);

    func(a, b, c, d, e, &sum, &avg, &std_dev);

    printf("The Sum: %f\n", sum);
    printf("The Average: %f\n", avg);
    printf("The Standard Deviation: %f", std_dev);

}
void func(int a, int b, int c, int d, int e, float *sum, float *avg, float *std_dev){
    *sum = a+b+c+d+e;
    *avg = *sum/5.0;

    *std_dev = sqrt (((a-*avg)*(a-*avg))+((b-*avg)*(b-*avg))+((c-*avg)*(c-*avg))+((d-*avg)*(d-*avg))+((e-*avg)*(e-*avg))/5.0);

}
