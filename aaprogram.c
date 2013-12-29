/* introduction to pointers */

#include "header.h"
int factorial(int x);


int
main(int argc, char *argv[])
{
	int a =5 ,fact;
	fact= factorial(a);
	printf("factorial of %d is %d\n", a, fact);
	
	return 0;


}

int factorial(int x)
{
	int f = 1, i;
	for(i = x; i >=1; i--)
		f=f*i;
	return(f);
}
