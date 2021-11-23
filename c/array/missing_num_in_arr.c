/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*find-the-missing-number*/

#include <stdio.h>
int  missing_ele (int n, int a[]){
    int total, sum, missing_num;
    total = (n + 1) * (n + 2) / 2;
    for (int i = 0; i < n; i++){
        sum += a[i];
    }
    total -= sum;
    return (total);
}
int main(){
    int num;
    printf("Enter the  number of element in array\n");
    scanf("%d", &num);
    int arr[num];
    printf("Enter the elements of array\n");
    for (int i = 0; i < num; i++){
        printf("Enter the value of  %d index of array\n", i);
        scanf("%d", &arr[i]);
    }
    printf("\nThe missing element is :->  %d ", missing_ele(num, arr));   
    return 0;
}
