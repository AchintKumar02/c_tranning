/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/


/** A positive integer is entered through the keyboard. Write a function
to obtain the prime factors of this number.
For example, prime factors of 24 are 2, 2, 2 and 3, whereas prime
factors of 35 are 5 and 7.**/


#include<stdio.h>
int prime(int x);
void main(){
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    prime(num);
}

int prime(int x){
    int a;
    for(a=2;a<=x;a++){
        if(x%a==0){
            printf("%d, ",a);
            x = x/a;
        }
    }
}
