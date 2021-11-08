/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main(){
    struct employee{
        char name[10];
        int age;
        float salary;
        
    };
        struct employee a = {"achint", 19, 50000};
        struct employee b, c;
        strcpy(b.name, a.name);
        b.age = a.age;
        b.salary = a.salary;
        c = b;


        printf("%s %d %f\n", a.name, a.age, a.salary);
                printf("%s %d %f\n", b.name, b.age, b.salary);
                        printf("%s %d %f", c.name, c.age, c.salary);


return 0;
}
