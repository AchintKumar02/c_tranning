/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
# include <stdio.h>
struct book{
    char name[20] ;
    char author[20] ;
    int seriesno;};
    void display (struct book b);
int main(){
    struct book b = {"Harry Potter", "JK Rollins",9 } ;
        display(b);
return 0 ;
}
void display ( struct book b ){
    printf (" Book name = %s,\n Author name = %s,\n Number of series = %d,\n", b.name, b.author, b.seriesno);
}