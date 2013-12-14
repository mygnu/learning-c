/* If a five-digit number is input through the keyboard, write a */
/* program to calculate the sum of its digits. */
/* (Hint: Use the modulus operator ‘%’) */


#include <stdio.h>

int main(int argc, char *argv[])
{
	int num,d1,d2,d3,d4,d5;
	
	printf ("Please entre a five digit Number: ");

	scanf("%d", &num);


	d5 = num % 10;
	num = num / 10;
	d4 = num % 10;
	num = num / 10;
	d3 = num % 10;
	num = num /10;
	d2 = num % 10;
	num = num / 10;
	d1 = num % 10;
	printf("you have entered:%d%d%d%d%d ", d1,d2,d3,d4,d5);

	printf (" total of all digits is: %d \n ",d1+d2+d3+d4+d5);

	return 0;
}
