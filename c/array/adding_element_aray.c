#include <stdio.h>
int sum_arr(int arr[], int n);
int main(void) {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof (arr)/sizeof (arr[0]);
    printf("The sum of arr is %d",sum_arr(arr, n));
    

	return 0;
}
int sum_arr(int arr[], int n){
    int sum = 0; 
    for(int i = 0; i < n; i ++){
        sum += arr[i];
    } 

return sum;
}