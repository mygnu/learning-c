/* Any integer is input through the keyboard. Write a program to */
/* find out whether it is an odd number or even number. */


#include <stdio.h>

int main(int argc, char *argv[])
{
	int num;
	printf ("pleae Enter an Integer:");
	scanf("%d", &num);
	if ((num % 2)==0)
		{
			printf ("Its an even number \n");
		}
	else
		printf ("Its an odd number\n");


	return 0;
}
 
