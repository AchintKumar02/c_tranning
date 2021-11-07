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
        case 0:
               printf("The Day is Zero\n");
        break;
        case 1:
               printf("The Days in the month is 31\n");
        break;
        case 2:
               printf("The Days in the month is\n");
        break;
        case 3:
               printf("The Days in the month is\n");
         break;
        case 4:
               printf("The Days in the month is 30\n");
        break;
         case 5:
               printf("The Days in the month is 31\n");
        break;
         case 6:
               printf("The Days in the month is30\n");
        break;
         case 7:
               printf("The Days in the month is\n");
        break;
         case 8:
               printf("The Days in the month is\n");
         break;
         case 9:
               printf("The Days in the month is 30\n");
        break;
        case 10:
               printf("The Days in the month is\n");
         break;
         case 11:
               printf("The Days in the month is\n");
         break;
         case 12:
               printf("The Days in the month is\n");
         break;
        default:
        printf("invalid try again");
    
    }

    return 0;
}
