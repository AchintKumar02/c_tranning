//prime number 
#include <stdio.h>
#include <stdlib.h>
int main(){
    int num, flag = 0, i;
    
    printf("Enter the number to check the num is prime or not:=\n");
    scanf("%d", &num);
    
    if(num < 2){
        printf("\nThe prime is starts from 2 \n");
        exit(0);
    }else{
        for(i = 2; i < num; i++){
            if(num % i == 0){
                flag = 1;
                break;
            }
        }
    }
    if(flag == 0){
        printf("The number %d is a prime number:= \n", num);
    }else{
        printf("The number is not a prime number:\n");
        }
        return 0;
}



