/*******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int showMenu(){
    
    int choice;

    printf("\n\n\n");
    printf("\t\t\t\t***********************************************************\n");
    printf("                                                       CALCULATOR\n");
    printf("\t\t\t\t***********************************************************\n");
    printf("\n\n");

    
    printf("\t                                          1. Addition\n");
    printf("\t                                          2. Substraction\n");
    printf("\t                                          3. Multiplication\n");
    printf("\t                                          4. Division\n");
    printf("\t                                          5. Exit\n\n\n");
    
    printf("\t\t\t\t***********************************************************\n");
    printf("                                                          END\n");
    printf("\t\t\t\t***********************************************************\n");
    
    printf("\n\n\t\t\t\t Enter Your Choice :-> ");
    scanf("%d", &choice);
    
    return choice;
}

void showMenuAgain(){
    printf("\n\n\n\t\t\tPress any key to continue ......");
    getch();
    showMenu();
}

int addition(int firstNum, int secondNum){
    return (firstNum + secondNum);
}

int substract(int firstNum, int secondNum){
    return (firstNum - secondNum);
}

int multiply(int firstNum, int secondNum){
    return (firstNum * secondNum);
}

int divide(int dividend, int divisor){
    if(divisor == 0){
        printf("DIVIDE BY ZERO ERROR");
        return 0;
    } else {
       return  (dividend / divisor) ;
    }
}

void showResult(int res, int num1, int num2, int type){
    
    printf("\t\t\t\t***********************************************************\n");
    printf("\n\n\n");
    
    switch(type){
         case 1:
            printf("                                          The sum of two numbers %d  + %d = %d", num1, num2, res);
            break;
         case 2:
             printf("                                         The substract of two numbers %d  - %d = %d", num1, num2, res);
            break;
         case 3:
             printf("                                         The multiply of two numbers %d  * %d = %d", num1, num2, res);
            break;
         case 4:
             printf("                                         The division of two numbers %d / %d = %d", num1, num2, res);
            break;
    }
    
    printf("\n\n");
    printf("\t\t\t\t***********************************************************\n");
    
    showMenuAgain();

}


void switchMenu(int choice){
    
    int numOne, numTwo, result;
    
    printf("\n\n\t\t\t\tEnter First Number :-> ");
    scanf("%d", &numOne);
    printf("\n\t\t\t\tEnter Second Number :-> ");
    scanf("%d", &numTwo);
    
    switch(choice){
        case 1:
            result = addition(numOne, numTwo);
            break;
        case 2:
            result = substract(numOne, numTwo);
            break;
        case 3:
            result = multiply(numOne, numTwo);
            break;
        case 4:
            result = divide(numOne, numTwo);
            break;
        case 5:
            exit(0);
        default:
            printf("\n\t\t\t\tSelect choice from available options.....\n\n\n");
            showMenuAgain();
    }
    showResult(result, numOne, numTwo, choice);
}



int main()
{
    int choice;
    choice = showMenu();
    switchMenu(choice);
    return 0;
}

















