/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define N 100
int marks[N], i, k, sum = 0;
float average;
int main(){
    printf("The number of subjects\n");
    scanf("%d", &k);
    printf("The number of subjects:-%d\n", k);
    for (int i = 1; i <= k; i ++){
        printf("Enter the marks of %dth subject:\f=", i);
        scanf("%d", &marks[i]);
    }
    for (i = 0; i < k;i++){
        sum = sum + marks[i];
    }
    for (i = 0; i < k; i++){
        average = sum / k;
    }
    printf("The average of the marks is :\f = %.2f ", average);
    return 0;
}
