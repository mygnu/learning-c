/* Any year is input through the keyboard. Write a program to */
/* determine whether the year is a leap year or not. */


#include <stdio.h>

int main(int argc, char *argv[])
{
	int year;
	printf ("pleae Enter the year:");
	scanf("%d", &year);
	if ((year % 4)==0)
		{
			printf ("Its a Leap Year \n");
		}
	else
		printf ("Its not a Leap Year\n");


	return 0;
}
 
