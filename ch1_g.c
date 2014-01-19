/* If a five-digit number is input through the keyboard, write a */
/* program to calculate the sum of its digits. */
/* (Hint: Use the modulus operator ‘%’) */


#include "header.h"
void total_of_digits(int n);

int main(int argc, char *argv[])
{
    int num;
    printf ("Please entre a five digit Number: ");

    scanf("%d", &num);

    total_of_digits(num);

    return 0;
}

void total_of_digits(int n)
{
    int d1,d2,d3,d4,d5; 	/* setup all place holders */
    d5 = n % 10; 		/* remainder of %10 is the last digit */
    n = n / 10;			/* integer division by 10 removes the
				   last digit */
    d4 = n % 10;
    n = n / 10;
    d3 = n % 10;
    n = n /10;
    d2 = n % 10;
    n = n / 10;
    d1 = n % 10;

    printf("you have entered:%d%d%d%d%d ", d1,d2,d3,d4,d5);

    printf (" total of all digits is: %d \n ",d1+d2+d3+d4+d5);

}
