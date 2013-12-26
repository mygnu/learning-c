/* Write a program to produce the following output: */
/* A B C D E F G F E D C B A */
/* A B C D E F   F E D C B A */
/* A B C D E       E D C B A */
/* A B C D           D C B A */
/* A B C               C B A */
/* A B                   B A */
/* A                       A */

#include "header.h"

int
main(int argc, char *argv[])
{

	
	char alphabet[8] = "ABCDEFG";


		for (int x = 7; x >= 1; --x)
			{
			
				for (int i = 0; i < 6; ++i)
				{
					if(i < (x))
						printf ("%c",alphabet[i]);
					else
						printf(" ");
					printf(" ");
										
				}
				
			for (int i = 6; i >= 0 ; i--)
				{
					if(i < (x))
						printf ("%c",alphabet[i]);
					else
						printf(" ");
					printf(" ");
					
				}
			printf("\n");
			sleep(1); // library unistd.h
			
			}		

	return 0;
}



