/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main(){
   
   int num, rem, sum = 0;
    
    for(num = 1; num <= 500; num ++){
        sum = 0;
        int temp = num;
        while(temp > 0){
         rem = temp % 10;
         sum = sum + (rem * rem * rem);
         temp = temp / 10;
         
        }
         if(num == sum){
             printf("The number %d is an armstrong number\n",num);
         }
    }
 
    return 0;
}
