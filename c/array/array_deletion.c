/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <conio.h>
void element();
void elmtposi();
void shiftdel(int posi);
int delet[100], shift, num, elmt, i, posi;
int main(){
    
    element();
    elmtposi();
    shiftdel(posi);
    return 0;
}
void element(){
    printf("Enter the no of element of array:-\n");                         
    scanf("%d", &num);                                                      
    for (i = 0; i < num; i++){                                                         
        printf("Enter the %dth element:-\n", i);                                                                               
        scanf("%d", &delet[i]);                                                                    
    }
}
void elmtposi(){
    printf("Enter the position from where you want to delete the element:-\n");
    scanf("%d", &posi);
}
void shiftdel(int posi){
    num = num - 1;
    printf("deleting  the element  in array ...\n");       
    for (int i = posi - 1; i < num; i++){
        delet[i] = delet[i + 1];
    }
    printf("The array of inserted value is:> \n");
    for(i = 0; i < num; i ++){
        printf("%d\t", delet[i]);
    }
}
