/* Two numbers are entered through the keyboard. Write a */
/* program to find the value of one number raised to the power */
/* of another. */

#include <stdio.h>

int main()
{
	double res;
	int n1,n2,i;
	printf("Please enter two numbers as base and power: ");
	scanf("%d %d",&n1,&n2);
	res = 1;
	
	for(i=1;i<=n2;i++)
		{
			res=res*n1;
		}

	printf("%.0f\n",res);
	return 0;
}

