/* Any character is entered through the keyboard, write a */
/* program to determine whether the character entered is a */
/* capital letter, a small case letter, a digit or a special symbol. */
/* The following table shows the range of ASCII values for */
/* various characters. */
/* Characters */
/* A – Z */
/* a – z */
/* 0 – 9 */
/* special symbols */

/* ASCII Values */
/* 65 – 90 */
/* 97 – 122 */
/* 48 – 57 */
/* 0 - 47, 58 - 64, 91 - 96, 123 - 127 */



#include "header.h"
 
int main(int argc, char *argv[])
{
    char c;
	printf("Please enter a character/symbol/number: ");
	scanf("%c", &c);

	
	if(c >= 65 && c <= 90)
		printf ("You have entered a Capital Letter");
	else if(c >= 97 && c <= 122)
		printf ("You have entered a small Letter");
	else if(c >= 48 && c <= 57)
		printf ("You have entered a Number");
	else if((c >= 0 && c <= 47) || (c >= 58 && c <= 64))
		printf ("You have entered a Special Symbol");
	else if((c >= 91 && c <= 96) || (c >= 123 && c <= 127))
		printf ("You have entered a Special Symbol");
	printf(" (%c)\n",c);
	return 0;
}

