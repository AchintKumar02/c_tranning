#include<stdio.h>

int main(){
    int numerator, denominator, rem, num1, num2;
    printf("Enter the two positive integer\n");
    scanf("%d%d", &num1, &num2);
    if (num1 > num2){
        numerator = num1;
        denominator = num2;
    }else{
        denominator = num1;
        numerator = num2;
    }
    rem = numerator % denominator;
    while(rem != 0){
        numerator = denominator;
        denominator = rem;
        rem = numerator % denominator;
    }
    printf("GCD is %d", denominator);
    printf("\nLCM is %d", num1 * num2 / denominator);
    return 0;
}
