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
void shiftin(int elmt, int posi);
int insrt[100], shift, num, elmt, i, j, posi, temt = 0, temt2 = 0;
int main(){
    
    element();
    elmtposi();
    shiftin(elmt, posi);
    return 0;
}
void element(){
    printf("Enter the no of element of array:-\n");                             // 0 1 2 3 4    posi = 2
    scanf("%d", &num);                                                          // 1 2* 3 4 5
                                                                                //        |
    for (i = 0; i < num; i++){                                  //                              
        printf("Enter the %dth element:-\n", i);                     //                                                             
        scanf("%d", &insrt[i]);                                        //                             
    }
}
void elmtposi(){
    printf("Enter the element you want to insert:-\n");
    scanf("%d", &elmt);
    
    printf("Enter the position where you want to insert the element, position start from 0:-\n");
    scanf("%d", &posi);
}
void shiftin(int elmt, int posi){
    num = num + 1;
    printf("Shifting the array for insertion...\n");       
    for (int i = num - 1; i >= posi; i--){
        insrt[i] = insrt[i - 1];
    }
    insrt[posi] = elmt;
    
    printf("The array of inserted value is:> \n");
    for(i = 0; i < num; i ++){
        printf("%d\t", insrt[i]);
    }
}