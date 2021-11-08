/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
struct book {
    char name;
    int grup;
    float percent;
};
int main() {
    struct book stds[20];
    for(int i = 0; i < 20; i++){
    printf("%d : Enter name, class, percent\n",i);
        scanf("\n%c %d %f", &stds[i].name, &stds[i].grup, &stds[i].percent);
    }   
    for(int i = 0; i < 20; i ++){

	printf("And this is what you entered\n");
        printf("\n%c %d %f",stds[i].name, stds[i].grup, stds[i].percent);
    }
			
return 0;
}
