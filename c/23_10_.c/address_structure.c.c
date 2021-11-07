/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){   
struct book{
    char name;
    char author;
    float price;
};
    struct book stds = {'a','b',34.56};
    printf("The address of name is => %u\n", &stds.name);
    printf("The address of author is => %u\n", &stds.author);
    printf("The address of price is => %u\n", &stds.price);
            
    return 0;
}
