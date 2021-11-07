/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <conio.h>
int main(){
    int i, j, k, temt;
    printf("Enter the size of array:");
    scanf("%d",&k);
    int reverse[k];
    for (i = 0; i < k; i ++){
        printf("Enter the value of index %d \f:->",i);
        scanf("%d", &reverse[i]);
    }
    for(int i = 0; i < k; i++){
        temt = reverse[i];
        reverse[i] = reverse[k - 1];
        reverse[k - 1] = temt;
    }
    for(int i = 0; i < k; i++){
    printf("%d",reverse[i]);
    }
    return 0;
}
