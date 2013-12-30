#include "header.h"

double power(int *x, int *y)
{
	double res =0;
	for (int i = 1; i < *y; i++)
		{
			res = res * (*x);
		}
	return (res);
}


/* int factorial(int x) // normal function */
/* { */
/* 	int f = 1, i; */
/* 	for(i = x; i >=1; i--) */
/* 		f=f*i; */
/* 	return(f); */
/* } */

int factorial(int x) // recursive function
{
	int f;
	if(x==1)
		return(1);
	else
		f=x*factorial(x-1);
	return (f);
}

unsigned int sumofn( unsigned int n)
{
	if(n == 0)
		return 0;
	return n%10 + sumofn(n/10);
}
