/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){

    int bonus, cy, yoj, yos;
    
    printf("Enter the Current Year and year of joining");
    scanf("%d %d", &cy, &yoj);
   
    yos = cy - yoj;
    if (yos > 3){
        bonus = 2500;
        printf("bonus = rs %d\n", bonus);
    }
    
    return 0;
}
