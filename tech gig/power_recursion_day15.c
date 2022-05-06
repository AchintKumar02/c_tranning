#include<stdio.h>
int power(int , int);
int main(){
	int ele, powr;
	scanf("%d %d", &ele, &powr);
	printf("%d", power(ele, powr));
}
int power(int num, int expo){
    if(expo != 0){
        return num * power(num, expo -1);
    }else{
        return 1;
    }
}