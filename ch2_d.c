/* Any year is input through the keyboard. Write a program to */
/* determine whether the year is a leap year or not. */


#include <stdio.h>

int main(int argc, char *argv[])
{
    int year,diff,leap,nleap,days,wday;


    printf ("Please enter a year: ");
    scanf("%i", &year);
    //year = year - 1;
    diff = year - 1900;         /* get the difference  */

    leap = diff / 4;            /* calculate the leap years */
    nleap = diff - leap;        /* calculate the non leap years */

    days = (365) + (leap * 366) + (nleap * 366); /* calculate the days */
    wday = days % 7;                             /* calculate the day of
                                                    the week*/

    printf ("year %d, diff %d, leap %d, nleap %d, days %d, wday %d\n",
            year, diff, leap, nleap, days, wday);

    if (wday == 1)
    {
        printf ("First day of the year %d was Monday\n",year);
    }
    if (wday == 2)
    {
        printf ("First day of the year %d was Tuesday\n",year);
    }
    if (wday == 3)
    {
        printf ("First day of the year %d was Wednesday\n",year);
    }
    if (wday == 4)
    {
        printf ("First day of the year %d was Thursday\n",year);
    }
    if (wday == 5)
    {
        printf ("First day of the year %d was Friday\n",year);
    }
    if (wday == 6)
    {
        printf ("First day of the year %d was Saturday\n",year);
    }
    if (wday == 0)
    {
        printf ("First day of the year %d was Sunday\n",year);
    }

    return 0;
}
