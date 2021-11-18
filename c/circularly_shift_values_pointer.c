/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/**Given three variables x, y, z write a function to circularly shift their
values to right. In other words if x = 5, y = 8, z = 10, after circular
shift y = 5, z = 8, x =10. Call the function with variables a, b, c to
circularly shift values**/
#include <stdio.h>
void shift_val(int * , int * , int *);
int x, y, z, temt; 
int main(){
    printf (" Enter the three value: \n");
    printf ("\nfirst value: ");
    scanf ("%d", &x);
    printf ("\n sec value: ");
    scanf ("%d", &y);
    printf ("\n third value: ");
    scanf ("%d", &z);
    printf ("\n The values are: %d, %d, %d ", x, y, z);
    shift_val(&x, &y, &z);
    printf ("\n The values are: %d, %d, %d ", x, y, z);
    
    return 0;
}
void shift_val(int *a, int *b, int *c){
    temt = *c;
    *c = *b;
    *b = *a;
    *a = temt;
}