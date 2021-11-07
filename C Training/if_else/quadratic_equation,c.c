/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, d;
    float x, y;
    
    printf("input the value of a, b, and c :->");
    scanf("%d %d %d", &a, &b, &c);
    
    d = b * b - 4 * a * c;
    if ( d == 0){
        printf("The both roots are equal");
        x = -b / 2.0 * a;
        x = y;
    } 
        else if ( d > 0){
            
        printf("The both roots are real");
        x = -b + sqrt ( d ) / 2 * a;
        y = -b - sqrt ( d ) / 2 *a;
    }
    else 
    printf("The roots are imaginary/no solution");
    return 0;
}
