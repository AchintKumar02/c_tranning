/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char grd;
    
    printf("input the grade  ");
    scanf("%c",&grd);
    
    switch(grd)
    {
        case 'E':
        case 'e':
                printf("Excellent");
                break;
                
        case 'V':
        case 'v':
                printf("Very good");
                break;
                
        case 'G':
        case 'g':
                printf("Good");
                break;
                
        case 'A':
        case 'a':
                printf("Average");
                break;
                
        case 'F':
        case 'f':
                printf("Fail");
                break;
                
        default: 
        printf("invalid");
       
    }
    
    
    return 0;
}
