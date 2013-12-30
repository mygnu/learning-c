#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>
#include <unistd.h>

//returns the y to the power x
double power(int *x, int *y);

//returens factorial of x
int factorial(int x); // normal function

//returns sum of all the digits in a number
unsigned int sumofn( unsigned int n);

//prints n number of fabonacci numbers
void fabonacci(int n);

// prompts for input
// pass value in the address of k from
// keyboard input
void getfrmkbd( int *k);

// prints prime factors of the int x
void primefactors(int x);
