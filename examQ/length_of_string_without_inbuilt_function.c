// length of a string without inbuilt function
#include<stdio.h>
#include<string.h>
 int main(){
    char arr[100];
    int i = 0;
    printf("Enter the string:- ");
    gets(arr);
    while(arr[i] != NULL){
        arr[i] = arr[i+1];
        i++;
    }
    printf("%d", i);
    
 }