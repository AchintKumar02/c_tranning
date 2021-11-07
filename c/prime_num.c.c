/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    int num,i;
    
    printf("Enter a number:-> ");
    scanf("%d",&num);
    
    for(i = 2; i < num; i++){
        if(num % i == 0){
            printf("\nThe number is not a prime");
            break;
        }
    }
         
        if(i == num){
            printf("\nThe number is a prime");
        }

    return 0;
}

