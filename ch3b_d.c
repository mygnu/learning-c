/* Write a program which to find the grace marks for a student */
/* using switch. The user should enter the class obtained by the */
/* student and the number of subjects he has failed in. */
/* − */
/* If the student gets first class and the number of subjects he */
/* failed in is greater than 3, then he does not get any grace. */
/* If the number of subjects he failed in is less than or equal */
/* to 3 then the grace is of 5 marks per subject. */
/* − */
/* If the student gets second class and the number of subjects */
/* he failed in is greater than 2, then he does not get any */
/* grace. If the number of subjects he failed in is less than or */
/* equal to 2 then the grace is of 4 marks per subject. */
/* − */
/* If the student gets third class and the number of subjects */
/* he failed in is greater than 1, then he does not get any */
/* grace. If the number of subjects he failed in is equal to 1 */
/* then the grace is of 5 marks per subject */

#include "header.h"

int 
main(int argc, char *argv[])
{
	int gm;
	int failed = 0;
	char cls[6];
	char* pc = cls;
	
	printf ("Please enter the class(f,s or t), and no of subject failed: ");

	scanf ("%s %d",pc, &failed);

	switch (cls[0])
		{
		case 'f':
			
			if (failed <=3)
				{
					gm = 5;
				}
			
		break;

		case 's':
			if (failed <=2)
				{
					gm = 4;
				}
			
			break;
		case 't':
			if (failed <=1)
				{
					gm = 5;
				}
			break;
		default:
			printf ("Please enter first, second or third as grade. \n");
			goto end;
		}
	printf ("You got %s grade and you are eligible for %d grace marks.\n", cls,gm);
 end:
	return 0;
}
