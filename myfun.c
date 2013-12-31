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


void fabonacci(int n)
{
  unsigned long n1 = 0;
  unsigned long n2 = 1;
  printf("%lu, %lu", n1,n2);
	
	
  for (int i = 2; i < n; i++)
	{
	  unsigned long n3 = n1 + n2;
	  printf(", %lu",n3);
	  n1 = n2;
	  n2 = n3;
	}
  printf("\n");
}


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



void getfrmkbd( int *k)
{
  printf("Please enter a number: ");
  scanf("%d", &(*k));
}

void primefactors(int x)
{
  int N = x;
  for (int i = 2; i < N; i++)
	{
	  if (x%i==0)
		{
		  printf("%d ", i);
		  x = x/i;
		  i=1;
		}
	}
  printf("\n");
}





