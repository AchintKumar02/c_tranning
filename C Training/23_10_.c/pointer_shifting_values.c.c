/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*Given three variables x, y, z write a function to circularly shift their
values to right*/

#include<stdio.h>
int Shiftft(int *x, int *y, int *z);
void main(){
    int x, y, z;
    // for(int i = 0; i <3; i++)
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    printf("Enter z: ");
    scanf("%d", &z);

    printf("Before Shift: x: %d  y: %d  z: %d",x,y,z);
  
    shift(&x, &y, &z);  
    printf("\nAfter shift: x: %d  y: %d  z: %d",x,y,z);
}
int shift(int *x, int *y, int *z){
    int Q;
    Q = *z;
    *z = *y;
    *y = *x;
    *x = Q;
}