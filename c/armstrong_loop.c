/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main(){
   
   int num, rem, sum = 0;
    
    // for(num = 1; num <= 500; num ++){
    //     sum = 0;
    //     while(num > 0){
    //      rem = num % 10;
    //      sum = sum + (rem * rem * rem);
    //      num = num / 10;
         
    //     }
    //      if(num == sum){
    //          printf("The number %d is an armstrong number",num);
    //      }
    // }
    num = 153;
     while(num > 0){
         rem = num % 10;
         sum = sum + (rem * rem * rem);
         num = num / 10;
         
     }
     if(num == sum){
         printf("The number %d is an armstrong number",num);
     }
 
    return 0;
}
