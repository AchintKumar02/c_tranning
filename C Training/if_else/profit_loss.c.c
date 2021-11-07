/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float cp, sp, pl;         //cp(cost price), pl(profitloss),sp(selling price)
    printf("Enter the cost price and selling price\n");
    scanf("%f%f", &cp, &sp);
    
    if (cp < sp){
        pl = sp - cp;
        printf("You can booked your profit amount :%f",pl);
    }
    else if (cp == sp){
        printf("Not profit nor loss");
    }
    else{
        pl = cp - sp;
        printf("You can booked your loss amount :%f",pl);
        
    }
    
    return 0;
}
