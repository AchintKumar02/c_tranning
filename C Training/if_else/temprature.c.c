/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int tem;
    printf("What is today's temperature\n");
    scanf("%d",&tem);
    
    if (tem < 0 ){
        printf("Freezing weather\n");
        }
    else if (tem < 10 ){
        printf("Very Cold weather\n");
    }
        else if (tem < 20 && tem > 10){
            printf("Cold weather\n");
        }
        else if (tem < 30 && tem >20){
            printf("Normal temperature");
        }
        else if (tem < 40 && tem >30){
            printf("its hot guys");
        }
        else{
            printf("its verry hot bro ");
        }
    return 0;
}
