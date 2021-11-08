#include <stdio.h>
int greatest_num(int arr[], int n);
int greater;

int main(void) {
    int arr[]={2, 3, 7, 4, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    
       printf("The greatest number is %d",greatest_num(arr,n));
       
	return 0;
}
 
int greatest_num(int arr[], int n){
int greater = arr[0];
    for(int i = 0; i < n; i++){
        if(greater < arr[i]){
            greater = arr[i];
    }
        
   } 
   return greater;
}
