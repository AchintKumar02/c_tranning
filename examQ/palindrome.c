//palindrom
#include <stdio.h>
#include <stdlib.h>
int main(){
    int num, temp, rem, rev = 0;
    printf("Enter the number to check the palindrome\n");
    scanf("%d", &num);
    temp = num;
    if ( num < 1){
        printf("Invalid number ");
        exit(0);
    }else{
        while (num != 0){
            rem = num % 10;
            rev = rev * 10 + rem;
            num = num / 10;
        }
    }
    if (rev != temp){
        printf("\nThe Entered %d number is not a palindrome", rev);
        
    }else{
        printf ("The number %d is a palindrome number:\n", temp);
    }
}