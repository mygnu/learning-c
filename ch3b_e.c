/* Write a program to print out all Armstrong numbers between */
/* 1 and 500. If sum of cubes of each digit of the number is */
/* equal to the number itself, then the number is called an */
/* Armstrong number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 */
/* * 5 ) + ( 3 * 3 * 3 ) */

#include <stdio.h>

int main()
{

	int i=1, temp;
	int d1,d2,d3;
	
	while (i <= 999)
		{
			if (i<10)
				{
					d1=i;
					d2=0;
					d3=0;
				}
			else if (i >= 10 && i < 100)
				{
					temp =i;
					d2= temp%10;
					temp= temp/10;
					d1 = temp%10;
					d3=0;
				}
			else if (i >= 100 && i <= 999)
				{
					temp =i;
					d3 = temp%10;
					temp= temp/10;
					d2= temp%10;
					temp= temp/10;
					d1 = temp%10;
				}
			if (i ==((d1*d1*d1)+(d2*d2*d2)+(d3*d3*d3)))
				{
					printf ("%d\n",i);;
				}



			i++;
		}

	return 0;
}

