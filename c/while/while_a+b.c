/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    
    int a, b, count;
    float nice;
    
    count = 0;
    
     while (count <= 5)
     {
     printf("\nEnter the value of a, b");
     scanf("%d %d\n", &a, &b);
     
     
     nice = ((a + b) * (a - b));
     
     printf("The solution is %f",nice);
     
     count = count + 1;
         
     }
     
    

    return 0;
}
