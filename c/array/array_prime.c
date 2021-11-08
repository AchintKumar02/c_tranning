/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define N 100
int array[N], i;
int main(){
    prime_num();
    
    return 0;
}
void prime_num(){
    int array[N];
   for(int i = 1; i <= N; i++){
        array[i] = i + 1;
   }   
   for(int i = 1; i <= N; i++){
       printf("%d\n",array[i]);
   }
}
void number(){
    printf("Enter the value of n :->");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++){
        printf("%d\n", i);
    }
    printf("\n\n\nThe prime number between 0 - %d is as follows:->\n", n);
    
}









void prime(int n){
for (int i = 1; i < n; i ++){
        for(int j = 1; j < i ; j ++){
            
            
            if(array[i] % j == 0){
                printf("%d", array[i]);
            }
        }
        
    }
}
