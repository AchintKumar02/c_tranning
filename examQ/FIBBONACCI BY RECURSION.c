//fibbonacci by RECURSION
#include <stdio.h>
#include<conio.h>
int fibo(int a){
    if (a == 0){
        return 0;
    }else if(a == 1){
       return 1; 
    }else{
        return fibo(a - 1)+ fibo(a - 2);
    }
    
}
int  main(){
    int f1 = 0 , f2 = 1, fib, no_term;
    printf("\nEnter the number of term of fibbonacci sequence:-");
    scanf("%d", &no_term);
    for(int i = 0;i < no_term; i++){
        printf("%d " , fibo(i));
    }
   
    

return 0;
}
