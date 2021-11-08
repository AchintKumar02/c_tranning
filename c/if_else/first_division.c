/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int roll, tot_marks, chem, phy, comp;
    char  name[20];
    float percent;
    
    printf("Enter The Roll Number\n");
    scanf("%d",&roll);
    
    printf("Enter The name of student\n");
    scanf("%s",&name);
    
    printf("Input The marks in chemistry\n");
    scanf("%d",&chem);
    
    printf("Input The marks in physics\n");
    scanf("%d",&phy);
    
    printf("Input The marks in computer application\n");
    scanf("%d",&comp);
    
    tot_marks = phy + chem + comp;
    printf("The Total marks is %d\n",tot_marks);
    
    
    percent = tot_marks / 300.00 * 100;
    
    
    printf("Percentage = %.2f%%", percent);
    
    
    if (percent >= 80){
    printf("\nFirst division");
    } 
    else if (percent >= 45 && percent <= 60){
        printf("\nSecond division");
    }
    else{
    printf("\nThird division");
    
    }

    return 0;
}
