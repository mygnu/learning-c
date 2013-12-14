/* If a five-digit number is input through the keyboard, write a */
/* program to print a new number by adding one to each of its */
/* digits. For example if the number that is input is 12391 then */
/* the output should be displayed as 23402. */



#include <stdio.h>

int main(int argc, char *argv[])
{
	int num,d1,d2,d3,d4,d5,tmp =0;
	printf ("Please enter a five digit number: ");
	scanf("%d", &num);
	tmp = num +1;
	d1 = tmp % 10;

	tmp = num / 10 +1;
	d2 = tmp % 10;

	tmp = num / 100 + 1;
	d3 = tmp % 10; 

	tmp = num / 1000 + 1;
	d4 = tmp % 10;

	tmp = num / 10000 + 1 ;
	d5 = tmp % 10;
	
	printf ("%d%d%d%d%d\n",d5,d4,d3,d2,d1);
	return 0;
}
 
