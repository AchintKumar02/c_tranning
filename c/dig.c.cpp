#include <stdio.h>

int main() {
    int num,i=0,size=0,j,temp;
    scanf("%d",&num);
    int k=num;
    while(num>0)
    {
        int rem;
        rem=num%10;
        size++;
        num/=10;
    }
    
    int arr[size];
    while(k>0)
    {
        int rem1;
        rem1=k%10;
        arr[i]=rem1;
        i++;
        k/=10;
    }
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]<arr[j])
            {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            }
        }
    }
    for(i=0;i<size;i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}