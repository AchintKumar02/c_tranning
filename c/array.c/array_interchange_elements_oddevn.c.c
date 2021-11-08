/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/**Write a program that interchanges the odd and even elements of
an array.**/
#include <stdio.h>
#include <conio.h>
int oddeve[100];
int num;
int temt = 0; 
int main(){
    printf("\nEnter the no of elemet in an array:->");
    scanf("%d", &num);
    printf("\nEnter the elements of the array:-");
    for (int i = 0; i < num; i++){
        printf("\nEnter the %dth element of the array:", i);
        scanf("%d", &oddeve[i]);
    }
    for (int i = 0; i < num; i ++){
        if (i * 2){
            temt = oddeve[i];
            oddeve[i] = oddeve[i - 1];
            oddeve[i - 1] = temt;
        }
        
    }
    for (int i = 0; i < num; i ++){
        printf("\nThe inter changed values of odd and even in array is %d:-", oddeve[i]);
    }
    return 0;
}
