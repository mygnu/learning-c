/* In a town, the percentage of men is 52. The percentage of */
/* total literacy is 48. If total percentage of literate men is 35 of */
/* the total population, write a program to find the total number */
/* of illiterate men and women if the population of the town is */
/* 80,000. */


#include <stdio.h>

int main(int argc, char *argv[])
{

    int tp,tm,lm,im,tw,tl,iw,lw =0;
    /* simple math applied here */
    tp = 80000;
    tm = tp*52/100; 		/* total male calculation */
    lm = tp*35/100;		/* literate males */
    im = tm - lm;		/* illiterate males */

    tw = tp - tm;
    tl = tp * 48/100;
    iw = tw - (tl - lm);
    lw = tl - iw;

    printf ("total populatin %d\n",tp);
    printf ("total literate %d\n",tl);
    printf ("total men %d\n",tm);
    printf ("Literate men %d\n",lm);
    printf ("illitrate men %d\n",im);
    printf ("total women %d\n",tw);
    printf ("litrate women %d\n",lw);
    printf ("illiterate women %d\n",iw);


    return 0;
}
