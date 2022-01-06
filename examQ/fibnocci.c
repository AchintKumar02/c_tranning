/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/ 
//fibnocci
#include <stdio.h>
#include <conio.h>
int main(){
    int a = 0, b = 1, c = 0, count, i;
    printf("Enter the num of term\n");
    scanf("%d", &count );
    
    printf("The fibnocci series of the %dth digit are :-", count);
    printf("%d\t %d\t", a, b);
    for (i = 0 ; i < count; i++){
        c = a + b;
        printf("%d\t", c);
        a = b;
        b = c;
    }


    return 0;
}
