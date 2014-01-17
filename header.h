
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>
#include <unistd.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

clock_t startm, stopm;
// START macro at the begining of the test
#define START if ( (startm = clock()) == -1) {printf("Error calling clock\n");exit(1);}

// STOP macro at the end of the test
#define STOP if ( (stopm = clock()) == -1) {printf("Error calling clock\n");exit(1);}

// PRINTTIME prints the time taken by the processor
#define PRINTTIME printf( "%6.5f seconds used by the processor.\n", ((double)stopm-startm)/CLOCKS_PER_SEC);



//returns the y to the power x
double power(int x, int y);

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

// takes an int and prints sum of all digits
int sumdig ( int num );

// takes a pointer to one D array and length of the array
void my_selection_sort(int a[], int N);
void my_bubble_sort(int a[], int N);
void my_insersion_sort(int a[], int N);











