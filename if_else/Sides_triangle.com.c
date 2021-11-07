/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{  
    int AB, BC, CA;
    
    printf("Enter the sides of a triangle ABC AB, BC, CA:-");
    scanf("%d %d %d",&AB, &BC, &CA);
    
    
    if (AB == BC == CA){
        printf("The triangle is Equilateral Triangle\n");
    }
    
     else if (AB == BC| BC == CA | AB == BC){
      printf("The triangle is Isosceles Triangle");
      
    }
        else{
            printf("The triangle is Scalene Triangle");
        }
        
    return 0;
}
