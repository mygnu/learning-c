/* If the total selling price of 15 items and the total profit earned */
/* on them is input through the keyboard, write a program to */
/* find the cost price of one item. */



#include <stdio.h>

int main(int argc, char *argv[])
{
    float sp,pr,cp = 0;
    printf ("pleas enter the selling price and porfit earned:");
    scanf("%f %f", &sp, &pr);

    cp = (sp/15) - (pr/15); 	/* simple math */

    printf ("cost price for one item is %.2f\n",cp);
    return 0;
}
