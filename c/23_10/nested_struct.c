/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
//   nested structure.
    struct ip_soft_emp{ 
        char name[20];
        int age;
        float salary;
    };
    struct address{
        char place[20];
        int pin;
        struct ip_soft_emp a;
    };
    struct address b={"kalappa layout",560037,"sanjay",30,120000};
    printf("Employee name = %s, \nEmployee age = %d, \nEmployee place = %s\n",b.a.name, b.a.age, b.place);
    printf("Employee salary = %u, \nAddress pin = %u,", b.a.age, b.pin);
    
    return 0;
}
