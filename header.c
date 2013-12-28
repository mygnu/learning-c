#include "header.h"

double power(int *x, int *y)
{
	double res;
	for (int i = 1; i < *y; i++)
		{
			res = res * (*x);
		}
	return res;
}
