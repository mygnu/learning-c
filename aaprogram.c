/* recursive functions */

#include "header.h"

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

int 
main(int argc, char *argv[])
{
	int x;
	getfrmkbd(&x);
	primefactors(x);
	return 0;
}

