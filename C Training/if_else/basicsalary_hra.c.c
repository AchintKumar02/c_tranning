/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float bs, hra, gs , da;
    
    printf("Enter the Basic salary");
    scanf("%f", &bs);

    if ( bs < 1500 )
    {
    hra = bs * 10 /  100;
    da = bs * 90 / 100;
    
    }
    else
    {
        hra = 500;
        da = bs * 98 / 100; 
    }
        gs = hra + da + bs;
        printf("The gross salary is = Rs %f\n", gs);
        printf("%f%f", hra, da);
    
    
    
    return 0;
}
