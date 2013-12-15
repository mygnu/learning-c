/* If cost price and selling price of an item is input through the */
/* keyboard, write a program to determine whether the seller has */
/* made profit or incurred loss. Also determine how much profit */
/* he made or loss he incurred. */
 

#include <stdio.h>

int main(int argc, char *argv[])
{
	float cp,sp;
	printf ("pleae enter cost price and sale price:");
	scanf("%f %f", &cp,&sp);
	if (cp > sp)
		{
			printf ("Seller made a loss of %.2f\n",cp-sp);
		}
	else
		printf ("Seller made a Profit of %.2f\n",sp-cp);


	return 0;
}
 
