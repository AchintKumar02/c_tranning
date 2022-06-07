#include <stdio.h>


void merge(int array[20], int lb, int mid , int ub){
    int array2[20];
    int i , j, k;
    for(i=lb, j=mid+1, k==lb;i<=mid && j<=ub;k++){
        if(array[i]<array[j]){
            array2[k]=array[i++];
        }else
            array2[k]=array[j++];
    }
    while(i<=mid)
        array2[k++]=array[i++];
    while(j<=ub)
        array2[k++]=array[j++];
    for(i=lb;i<k;i++){
        array[i]=array2[i];
    }
}
void merge_sort(int array[], int lwr, int upr){
    int mid;
    if(lwr < upr){
        mid = lwr + upr/2;
        merge_sort(array, lwr, mid);
        merge_sort(array, mid+1, upr);
        merge(array, lwr, mid, upr);
    }
}
int main(){
    int array[20], i, num;
    printf("Enter the number of elements \n");
    scanf("%d", &num);
    printf("Enter the element ");
    for(i=0;i<num;i++){
        scanf("%d", &array[i]);
    }printf("ghj");
    merge_sort(array, 0, num-1);
    printf("sorted array\n");
    for(int i=0;i<num;i++){
        printf("%d\t", array[i]);
    }
    return 0;
}