/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/**Twenty-five numbers are entered from the keyboard into an array.
The number to be searched is entered through the keyboard by the
user. Write a program to find if the number to be searched is
present in the array and if it is present, display the number of times
it appears in the array**/

#include <stdio.h>
int series[5];
int num, times = 1, position;
void number(int series[]);
void search(int series[]);

int main(){
    for(int i = 0; i < 5; i ++){
        printf("Enter the number %d\n", i);
        scanf("%d", &series[i]);
    }
search(series);
    return 0;
    }



void search(int series[])  {
    int times = 0;
    printf("Enter the number you want to find is present in the array or not:-\n");
    scanf("%d", &num);
    for(int i = 0; i < 5; i ++){
        if(num == series[i]){
            printf("\nThe number is present on %d position in the array \n", i);
        } else  {
        printf("\nThe num is not present on %d position in the array.", i);
        }
    }
    for(int i = 0; i < 5; i++){
        if(num == series[i]){
            times++;
        } else {
            printf("\nThe number you choose is not present in the array. \n Choose different number.\n");
        }
    
    printf("\nThe number is present and id on :-%d position in the array \n", i);
    printf("The number repeats:- %d times in the array\n", times);
    }
    
}

    

