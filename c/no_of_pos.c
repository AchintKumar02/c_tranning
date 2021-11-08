/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    
    int num, pos = 0, neg = 0, zero = 0; 
    char choice;
    
    do{
        printf("Enter the number:-> ");
        scanf("%d", &num);
        if(num < 0){
            neg++;
        } else if(num > 0){
            pos++;
        } else{
            zero++;
        }
        printf("\nThe no of negative is %d",neg);
        printf("\nThe no of positive is %d",pos);
        printf("\nThe no of zero is %d",zero);
        printf("\nDo you want more");
        scanf("%c", &choice); 
    }while(choice != 'N');
    return 0;
}
