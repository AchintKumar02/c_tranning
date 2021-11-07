/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
main (){
  float si (int principle, int rate, int time);
  int p, r, t;
  float simi;

  printf ("Enter the value of principle, rate and time period");
  scanf (" %d  %d  %d", &p, &r, &t);

  simi = si (p, r, t);
  printf ("The simple intrest of principle %d, rate %d and time %d is si %f",
	  p, r, t, simi);

  return 0;
}

float
si (int principle, int rate, int time)
{

  float result = (principle * rate * time) / 100;
  return result;
}
