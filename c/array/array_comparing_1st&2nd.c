/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/** If an array arr contains n elements, then write a program to check if
arr[ 0 ] = arr[ n-1 ], arr[ 1 ] = arr[ n - 2 ] and so on.***/
#include <stdio.h>
int arr[100];
int n, a = 1;
int main(){
    printf("Enter the no of element in an array:-\n");
    scanf("%d", &n);
    
    printf("Enter the elements of the an array:\n");
    for (int i = 0; i < n; i ++){
        printf("Enter the element of %dth index:\n", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n / 2; i++){
        //for(int j = n - 1; j < 0; j --){
            if (arr[i] == arr[n - a]){
                printf("\nArray %d and Array %d are equal", i, n - a);
            }
            else{
                 printf("\nArray %d and Array %d are not equal", i, n - a);
            }
            a++;
        }
    return 0;
}
