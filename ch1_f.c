/* Two numbers are input through the keyboard into two */
/* locations C and D. Write a program to interchange the */
/* contents of C and D. */

#include <stdio.h>

int main(int argc, char *argv[])
{
	int C, D, H;
	
	printf ("Please entre two numbers C and D\n");

	scanf("%d %d", &C, &D);
	printf( "C= %d, D = %d\n", C, D);

	H = C; // Place holder
	C = D;
	D = H;
	
	printf( "C= %d, D = %d\n", C, D);
	


    return 0;
}
