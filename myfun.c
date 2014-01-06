#include "header.h"

/* take two ints raises second to the power of first */
double power(int x, int y)
{
  double res =1;
  for (int i = 0; i < y; i++)
	{
	  res = res * (x);
	}
  return (res);
}

/* takes an int and pirnts fabonacci series up to that */
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

/* takes an int and calculates the factorial value of that int */
/* returns int */
int factorial(int x) // recursive function
{
  int f;
  if(x==1)
	return(1);
  else
	f=x*factorial(x-1);
  return (f);
}

/* takes an unsigned int and calculates the sum of all the digits */
/* returns unsigned int */
unsigned int sumofn( unsigned int n)
{
  if(n == 0)
	return 0;
  return n%10 + sumofn(n/10);
}


/* prints the pormpt to take an pointer to integer and from the keyboard and
 assignns the value at the address of int */
void getfrmkbd( int *k)
{
  printf("Please enter a number: ");
  scanf("%d", &(*k));
}

/* takes an int and prints pirme factors of that int */
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

/* takes an int and prints sum of all its digits */
/* int sumdig ( int num ) */
/* { */
/*   static int sum ; */
/*   int a, b ; */

/*   a = num % 10 ; */
/*   b = ( num - a ) / 10 ; */

/*   sum = sum + a ; */

/*   if ( b != 0 ) */
/*     sumdig ( b );  */
/*     else */
/*     return ( sum ); */
/* } */




