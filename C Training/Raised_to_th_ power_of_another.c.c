/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    int  a = 8, b = 2, count;
    int num = a;
    for(count = 1; count < b; count++){
        num = num * a;
    }
    printf("%d",num);
    return 0;
 }
