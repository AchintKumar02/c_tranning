/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/**********selection sort method-------44 33 66 88 11**/
#include <stdio.h>
int
main (){
  int array[5];
  int n, i, j, a;
  printf ("Enter the no of element:-");
  scanf ("%d", &n);
  for (int i = 0; i < n; i++){
      printf ("Enter the number:-\n>");
      scanf ("%d", &array[i]);
    }
    for (int i = 0; i < n; i++){ //5
        for (int j = i + 1; j < n; j++){
            if (array[i] > array[j]){			//1 5 4 2 3 
                int a = array[i];
                array[i] = array[j];
                array[j] = a;
            }
        }
    }
  printf ("Sorted list in ascending order:\n");

  for (int i = 0; i < n; i++){
    printf ("%d\n", array[i]);
  }
  return 0;
}
