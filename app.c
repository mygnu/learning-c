
/* aaprogram.c --- test file for all programs in c
 *
 * Filename: aaprogram.c
 * Description: Test file for all programms
 * Author: mygnu
 * Maintainer:
 * Created: Fri Jan 17 12:31:19 2014 (+1030)
 * Version: 0.01
 * Package-Requires: (Nil)
 * Last-Updated: Thu Jan 23 12:16:15 2014 (+1030)
 *           By: mygnu
 *     Update #: 57
 *
 */

/* Commentary:
 
 *
 *
 */

/* Change Log:
 *
 *
 */


/* Code: */

#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char *argv[])
{
    int day, month, year;
    scanf("%d/%d/%d", &day,&month,&year);
    printf("this is American format: %2d/%2d/%4d\n",month, day, year);

    return EXIT_SUCCESS;
}


/* aaprogram.c ends here */









