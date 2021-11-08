/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/**(a) Write a program to copy the contents of one array into another in
the reverse order**/
#include <stdio.h>
int rev[100];
int ver[100];
int num, i, a = 0;
int main(){
    printf("Enter the no of element in an array:-\n");
    scanf("%d", &num);
    
    printf("Enter the elements of the an array:\n");
    for (int i = 0; i < num; i ++){
        printf("Enter the element of %dth index:\n", i);
        scanf("%d", &rev[i]);
    }
    for(int i = num - 1; i >= 0; i--){
        //for (int a = 0; a < num; a++){
        ver[a] = rev[i];
        a++;
        //}
    }
    printf("The reversed array is as follows:-\n");
    for (a = 0; a < num; a++){
        printf("%d\t", ver[a]);
        
    }
    return 0;
}
