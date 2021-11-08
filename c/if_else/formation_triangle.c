/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a, b, c;
    
    printf("Enter the angles of Triangle a, b, c:-\t");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a + b + c == 180){
        printf("The Triangle can be formed by the given angles");
    }
    else{
        printf("The Triangle cannot be formed by the given angles");
    }
    

    return 0;
}
