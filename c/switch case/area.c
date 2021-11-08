/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{ 
    int r, l, b, h, a, choice;
    float area;
    
     printf("**********************************TO FIND THE AREA****************************************\n\n\n");
     printf("\t\t\tInput 1 for Area of Circle: \t\t\n");
     printf("\t\t\tInput 2 for Area of Rectangle: \t\t\n");
     printf("\t\t\tInput 3 for Area of Square: \t\t\n");
      printf("\t\t\tInput 4 for Area of right angle triangle: \t\t\n");
     
      
    printf("\n\n\nInput your choice ");
    scanf("%d", &choice);

    switch (choice)
    {
            case 1:
                    printf("Input radius of the Circle\n");
                    scanf("%d",&r);
                    area = 3.14 * r *r;
                    printf("The area of Circle is %f",area);
                    break;
                    
                    
            case 2:
                    printf("Input length and breadth of the Rectangle\n");
                    scanf("%d \t %d", &l, &b);
                    area = l * b;
                    printf("The Area of Rectangle is %f",area);
                    break;
                    
            case 3:
                    printf("Input side of the  Square\n");
                    scanf("%d",&a);
                    area = 4 * a;
                    printf("The Area of Square is %f",area);
                    break;
                    
            case 4:
                    printf("Inpur base and height of the right angled triangle\n");
                    scanf("%d \t %d", &b, &h);
                    area = 1 / 2 * b * h;
                    printf("The area of Square is %f",area);
                    break;
                    
            default:
                    printf("You have chosen the wrong choice");
                    break;
                    
          
    }                
                    
                    
    return 0;
}
