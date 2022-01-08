/* Read input from STDIN. Print your output to STDOUT*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	char s[100000];
	int uppercase, lowercase =0, i =0 ;
	    gets(s);
	    while(s[i] != '\0'){
	        if(s[i] >= 'a' && s[i] <= 'z'){
	            lowercase++;
	        }if(s[i] >= 'A' && s[i]<= 'Z'){
	            uppercase++;
	        }
	        i++;
	    }
	    printf("%d", uppercase);
	    printf("\n%d", lowercase);
	    return 0;
}
