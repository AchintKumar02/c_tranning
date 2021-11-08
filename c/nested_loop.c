/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    int a , i , j;
    a = 7;
    for (i = 0; i < 5; i++){
        for (j = 0; j < a; j++){
            printf("*");
        }
            printf("\t");
            printf("\n");
        
        a = a - 2;
    printf("\n");
    }

    return 0;
}
