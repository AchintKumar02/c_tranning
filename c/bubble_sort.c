/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/**********bubble sort method-------44 33 66 88 11**/
#include <stdio.h>
int main(){
    int array[5];
    int n, i, j, a;
    printf("Enter the no of element:-");
    scanf("%d",&n);
    for(int i = 0; i < n; i ++){
        printf("Enter the number:-\n>");
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(array[j] > array[j + 1]){
                int a = array[j];
                array[j] = array[j + 1];
                array[j + 1] = a;
            }
        }
    }
    printf("Sorted list in ascending order:\n");
    for (int j = 0; j < n; j++){
        printf("%d\n", array[j]);
    }
    
    
    return 0;
}
