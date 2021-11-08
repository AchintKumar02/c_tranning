/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <conio.h>
int main(){
    int i,num, m, sum = 0, n, rem;
    printf("Enter the number\n");
    scanf("%d",&num);
    m = num;
    while (num > 0){
        rem = num % 10;
        sum = sum * 10 + rem;
        num = num / 10;
    }
    printf("The reverse of the number is %d\n", sum);
    if (sum == m){
        printf("The nummber is palindrom number\n");
    }
    else {
        printf("The number is not a palindrom number\n");
    }


    return 0;
}
