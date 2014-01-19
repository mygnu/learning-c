/* Any year is entered through the keyboard, write a program to */
/* determine whether the year is leap or not. Use the logical */
/* operators && and ||. */


#include "header.h"

int main(int argc, char *argv[])
{
    int year = 0;
    printf("Please enter a year: ");
    scanf("%d", &year);
    if(year && year % 4)	/* simple enough logic */
        printf ("this is not a leap year\n");
    else
        printf("this is a leap year\n");
    return 0;
}
