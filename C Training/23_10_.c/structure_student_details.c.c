/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/** Create a structure to specify data on students given below:
Roll number, Name, Department, Course, Year of joining
Assume that there are not more than 450 students in the college.
(1) Write a function to print names of all students who joined in a
particular year.
(2) Write a function to print the data of a student whose roll
 number is received by the function.**/

#include <stdio.h>
struct students{
    int roll_num;
    char name[20];
    char department[20];
    char course[20];
    int year_of_joining; 
}stud[2];

int no_of_students = 2;
int year;
int rlnum;
void joining_year(){
    // for(int i = 0; i <= no_of_students; i++){
    printf("\nEnter the particular year:-");
    scanf("%d",&year);
    printf("\nThese student were join in the year:- %d", year);
    for (int i = 0; i < no_of_students; i++){
        if(stud[i].year_of_joining == year){
            printf("\n%s", stud[i].name);
         
        }
    }

}
void detail_of_the_student(){
    printf("\nEnter the roll num of the student:");
    scanf("%d",&rlnum);
    for(int i = 0; i < no_of_students; i++){
        if(stud[i].roll_num == rlnum){
            printf("\nName of the student:->%s\n", stud[i].name);
        }
    }
}


int main(){
    printf("\bEnter the details of the students\n\n");
    for(int i = 0; i < no_of_students; i++){
        printf("\n\nEnter the roll number:->");
        scanf("%d",&stud[i].roll_num);
        printf("Enter the name:->");
        scanf("\n%s", &stud[i].name);
        printf("Enter the department:->");
        scanf("\n%s,", &stud[i].department);
        printf("Enter the course:->:->");
        scanf("\n%s,", &stud[i].course);
        printf("Enter the year_of_joining:->");
        scanf("\n%d,", &stud[i].year_of_joining);
    }                   
    printf("Data of students are");
    for(int i=0;i< no_of_students;i++){
        printf("\nRoll no of student is %d", stud[i].roll_num);
        printf("\nName of student is %s\t", stud[i].name);
        printf("\nDepartemt of student is%s", stud[i].department);
        printf("\nCourse of student is %s\t", stud[i].course);
        printf("\nYear of joining is %d\t", stud[i].year_of_joining);
    }
    
    joining_year();
    detail_of_the_student();
    return 0;
}

