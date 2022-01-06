#include <stdio.h>
int main()
{
    int arr[10000];
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 1; i < n; i++){
        for(int j = 0; j < n-i; j++){
            if(arr[j] < arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
   
    printf("%d", arr[1]);

    return 0;
}
