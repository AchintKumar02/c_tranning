/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char deck;
    
    printf("Enter the value\n");
    scanf("%c",&deck);
    
    if ((deck >= 'a' && deck <= 'z' ) || (deck >='A' && deck <='Z')){
        printf("The character is an Alphabet\n");
    }
    
    else if (deck >= '0' && deck <= '9'){
        printf("The Character is an digit\n");
    }
    else{
        printf("The Character is a special Character\n");
    }
    
    return 0;
    
}
