/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    float degree, radian;
    float PI = 3.14159;
    
    printf("Enter the angle in degree\n");
    scanf("%f/n",&degree);
    
    radian = degree * (PI / 180.00);
    
    printf("sin%f = %f\n", degree, sin (radian));
    printf("cos%f = %f\n", degree, cos (radian));
    printf("tan%f = %f\n", degree, tan ( radian));
    printf("cosec%f = %f\n", degree, 1/sin ( radian));
    printf("sec%f = %f\n", degree, 1/cos (radian));
    printf("tan%f = %f\n", degree, 1/tan (radian));

    return 0;
}
