/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/**Write a C function to evaluate the series
Chapter 9: Pointers 171
 sin(x) = x - (x3/ 3!) + (x5/ 5!) - (x7/ 7!) +.. upto 10                **/
#include <stdio.h>
#include <math.h>
float fact(float);
//float power(float, float);
void main(){
    float x, powr = 3, cosx = 0, , result, sign = -1.0, no_of_term = 10.0, sum;
    printf("Enter the value of x\n");
    scanf("%f", &x);
    printf("The value of x is :->%f \n", x);
    for (int i < 0; i < no_of_term; i++){
        sum = sum + (pow(x,powr )/fact(powr)) * sign;
        powr += 2;
        sign = -sign;
    }
    
    
    printf("The value of sin(%f) is:%f\n", x, result);
    printf("The factorial value is: %f\nThe power is:%d\n", factorial(powr), temt);
}
float fact(float bar){
    int sum = 1;
    for(int i = 1; i <= bar; i++){  
        sum = sum * i;
    }  
    return(sum);  
}
