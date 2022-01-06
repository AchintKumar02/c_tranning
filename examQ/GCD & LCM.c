//gcd lcm
#include <stdio.h>

int main(){
    int num, den, rem, num1, num2, gcd, lcm;
    
    printf("\n Enter two numbers :-");
    scanf("%d %d", &num1 , &num2);
    
    if (num1 > num2){
        num = num1;
        den = num2;
    }else{
        num = num2;
        den = num1;
    }
    rem = num % den;
    while (rem != 0){
        num = den;
        den = rem;
        rem = num % den;
    }
    gcd = den;
    lcm = num1 * num2 / gcd;
    printf("\nThe GCD of the num %d and %d is: %d ", num1, num2 , gcd );
    printf("\nThe LCM of the num %d and %d is: %d ", num1, num2 , lcm );
}