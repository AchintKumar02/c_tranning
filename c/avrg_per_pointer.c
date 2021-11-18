/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void marks (float *, int *);
int average, sum;
float percentage, math, eng, hind;


int main() {
  marks(&percentage, &average);
  printf (" percentage is : %f ", percentage);
  printf (" average is : %d ", average);
  return 0;
}

void marks(float *percentage, int *average){
    
    printf (" Enter the marks of subjects out of 100 : \n");
    printf ("\nmarks in maths: ");
    scanf ("%f", &math);
    printf ("\nmarks in english: ");
    scanf ("%f", &eng);
    printf ("\nmarks in hindi: ");
    scanf ("%f", &hind);
    sum =  math + eng + hind;
    *average = sum / 3;
    *percentage = (sum * 100) / 300;
}

