/* A cashier has currency notes of denominations 10, 50 and */
/* 100. If the amount to be withdrawn is input through the */
/* keyboard in hundreds, find the total number of currency notes */
/* of each denomination the cashier will have to give to the */
/* withdrawer. */



#include <stdio.h>

int main(int argc, char *argv[])
{
	int ten,hun,fif,wid =0;

	printf("Please enter the amount to withdraw: ");
	scanf("%d",&wid);

	hun = wid/100;		/* calculate how many hundreds we need */

	wid = wid % 100;	/* keep the remainder of 100 */

	fif = wid /50;		/* calculate how many 50s we need */

	wid = wid % 50;		/* keep the remainder of 50 */

	ten = wid / 10;		/* calculate how many 10s we need */

	printf ("To withdraw %d you will get %d 100s, %d 50s and %d 10s \n",
		wid,hun,fif,ten); /* print out the values */
	
	
	return 0;
}
 

