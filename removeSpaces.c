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
 * Write a program that replaces two or more consecutive blanks
 * in a string by a single blank. For example, if the input is
 * Grim return   to the   planet  of        apes!!
 * the output should be
 * Grim return to the planet of apes!!
 *
 *
 */

/* Change Log:
 *
 *
 */


/* Code: */

#define SPACE 1
#define NONSPACE 0

#include "header.h"  // all required header files

void  removeXtraSpaces(char str[], char nstr[]);

int
main(int argc, char *argv[])
{
    char my_str[50] = {"The         brown     fox."};
    //gets my_str;
    char result[50];// = "______________";
    printf("%s \n", my_str);
    removeXtraSpaces( my_str, result);

    printf("%s\n", result);

}
char myarr[3][10] =
{
    "this",
    "is",
    "a"
};
void  removeXtraSpaces(char str[], char nstr[])
{
    int flag = NONSPACE;

    while (*str != '\0')
    {
        if(*str != ' ')
        {
            flag = NONSPACE;
            *nstr = *str;
            nstr++;
        }
        else if (*str == ' ' && flag == NONSPACE)
        {
            flag = SPACE;
            *nstr = ' ';
            nstr++;
        }

        str++;
    }

}

/* aaprogram.c ends here */
