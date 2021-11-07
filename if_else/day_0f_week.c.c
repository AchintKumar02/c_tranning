/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int dayno;
    
    printf("Enter the day no");
    scanf("%d", &dayno);
    
    switch(dayno)
    {
        
        break;
        case 1:
               printf("The Day is monday\n");
        break;
        case 2:
               printf("the Day is tuesday\n");
        break;
        case 3:
               printf("The Day is wednesday\n");
        break;
         case 4:
               printf("The Day is thusday\n");
        break;
         case 5:
               printf("The Day is friday\n");
        break;
         case 6:
               printf("The Day is saturday\n");
        break;
         case 7:
               printf("The Day is sunday\n");
        break;
        default:
        printf("invalid try again");
    
    }

    return 0;
}
