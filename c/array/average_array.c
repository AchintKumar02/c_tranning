/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
   int avrg, sum = 0;
   int marks[30];
   
   for(int i = 0 ; i <= 29; i++){
       printf("Enter the marks of student:-> ");
       scanf("%d", &marks[i]);
    }
    for(int i = 0 ; i <= 29; i++){
        sum = sum + marks[i];
        avrg = sum / 30;
        printf("\nThe average marks of 30 student is %d", avrg);
    }
        
    return 0;
}
