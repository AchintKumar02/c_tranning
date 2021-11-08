/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
    
void table(int );
int main(){
    
    int  num;
    printf("Enter the value of num :->");
    scanf("%d", &num);
    
    table(num);
    return 0;
}

void table(int no){
    int count = 0;
    while (count++ < 10){
        printf("%d * %d = %d\n", no, count, no * count);
    }
    
}










