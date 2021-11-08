/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/**Twenty-five numbers are entered from the keyboard into an array.
Write a program to find out how many of them are positive, how
many are negative, how many are even and how many odd.**/
#include <stdio.h>
void positive();
void negative();
void even();
void odd();
int num, poscount, negcount = 0, evencount = 0, oddcount = 0;
int array[25];
int main(){
    printf("\nEnter the number of integer:->\n");
    scanf("%d", &num);
    printf("\nEnter the integers:->");
    for(int i = 0; i < num; i++){
        printf("\nEnter the number:-\n>");
        scanf("%d", &array[i]);
    }
    positive(array, num);
    negative(array, num);
    odd(array, num);
    even(array, num);
    
    
}
void positive(int array[],int num){
    int poscount = 0;
    printf("\nThe no of positive integers :->\n");
    for(int i = 0; i < num; i++){
        if (array[i] >= 0){
        poscount++;
        }
    }
    printf("The total no of positive integer is:-> %d\n", poscount);
}  
void negative(int array[], int num){
    int negcount = 0;
    printf("\nThe no of negative integers :->\n");
    for(int i = 0; i < num; i++){
        if (array[i] <= 0){
        negcount++;
        }
    }
    printf("The total no of negative integer is:-> %d\n", negcount);
}  
void odd(int array[], int num){
    int oddcount = 0;
    printf("\nThe no of odd integers:->\n");
    for(int i = 0; i < num; i++){
        if (array[i] % 2 != 0){
        oddcount++;
        }
    }
    printf("The total no of odd integer is:-> %d\n", oddcount);
    
    
}
void even(int array[], int num){
    int evencount = 0;
    printf("\nThe no of even integers :->\n");
    for(int i = 0; i < num; i++){
        if (array[i] % 2 == 0){
        evencount++;
        }
    }
    printf("The total no of even integer is:-> %d\n", evencount);
}
    