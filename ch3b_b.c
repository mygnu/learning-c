#include <stdio.h>

int main()
{
	double x =1;
	int n,i;
	printf("Please enter a number: ");
	scanf("%d",&n);
 
	for(i=1;i<=n;i++)
		{
			x=x*i;
		}
 	printf("%f\n",x);
	return 0;
}
