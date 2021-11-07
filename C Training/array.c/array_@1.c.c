/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main(){
    char name[50];
    int slno[30];
    float timings[20],i;
    printf("Enter the details:->");
    for(int i = 0; i <= 8; i++)
        scanf("%c %d %f", &name[i], &slno[i], &timings[i]);
    
    for(int i = 0;  i <= 8; i++)
        printf("The details you entered \n%c %d %f\n", name[i], slno[i], timings[i]);
        
    

 return 0;
}