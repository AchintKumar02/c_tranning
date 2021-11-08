/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char a, e, i, o, u, A, E, I, O, U;
    char alpha;
   printf("Enter the alphabet:");
   scanf("%c", &alpha);
   
    if (alpha == 'a'| alpha == 'e'| alpha == 'i'| alpha == 'o'| alpha =='u'){
       printf("The alphabet is vowel");
    }
    else if (alpha == 'A'| alpha == 'E'| alpha == 'I'| alpha == 'O'| alpha =='U'){
        printf("The alphabet is vowel");   
       }
   
   else{
       printf("The alphabet is consonant");
   }
   
    return 0;
}
