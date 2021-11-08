/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
struct book {
    char name;
    int grup;
    float percent;
};
int main() {
    struct book s, t, u;
    printf("Enter name, class, percent\n");
        scanf("%c %d %f\n", &s.name, &s.grup, &s.percent);  //use single alphabet as name like 'a'etc
        scanf("%c %d %f\n", &t.name, &t.grup, &t.percent);
        scanf("%c %d %f", &u.name, &u.grup, &u.percent);

	printf("And this is what you entered\n");
        printf("%c %d %f\n", s.name, s.grup, s.percent);
        printf("%c %d %f\n", t.name, t.grup, t.percent);
        printf("%c %d %f\n", u.name, u.grup, u.percent);
			
			
			
return 0;
}
