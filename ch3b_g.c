/* Write a program to enter the numbers till the user wants and */
/* at the end it should display the count of positive, negative and zeros entered. */

#include <stdio.h>

int
main(int argc, char *argv[])
{

	int num, pos,neg,zero,state;
	num = pos = neg = zero = state = 0;
	char c = 'y';
	while(c =='y')
		{
			printf ("Please enter a number: ");
			scanf ("%d",&num);
			if (num > 0)
				{
					pos++;
				}
			else if (num < 0)
				{
					neg++;
				}
			else
				{
					zero++;
				}


			printf ("\nDo you want to enter anothr number y/n: \n");
			scanf ("%c", &c);
					
		}
	printf ("You have entered %d positive, %d negative and %d zeros\n",pos, neg, zero);
    
	return 0;
}



