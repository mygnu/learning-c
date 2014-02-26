
/* A certain grade of steel is graded according to the following */
/* conditions: */
/* (i) Hardness must be greater than 50 */
/* (ii) Carbon content must be less than 0.7 */
/* (iii) Tensile strength must be greater than 5600 */
/* The grades are as follows: */
/* Grade is 10 if all three conditions are met */
/* Grade is 9 if conditions (i) and (ii) are met */
/* Grade is 8 if conditions (ii) and (iii) are met */
/* Grade is 7 if conditions (i) and (iii) are met */
/* Grade is 6 if only one condition is met */
/* Grade is 5 if none of the conditions are met */
/* Write a program, which will require the user to give values of */
/* hardness, carbon content and tensile strength of the steel */
/* under consideration and output the grade of the steel. */


#include "header.h"

int main(int argc, char *argv[])
{
    int har,ten,check,grade;
    float car;
    har = car = ten = grade = check = 0;

    printf ("Type tha Hardness, Carbon and Tensile of the Steel: ");
    scanf("%d %f %d",&har,&car,&ten);

    har = har > 50; 		/* non zero if condition is true
				 else false(0)*/
    car = car < 0.7;
    ten = ten > 5600;

    if (har && car && ten)
    {
        grade = 10;
    }
    else if (har && car && !ten)
    {
        grade = 9;
    }
    else if (!har && car && ten)
    {
        grade = 8;
    }
    else if (har && !car && ten)
    {
        grade = 7;
    }
    else if ((har+ten+har) == 1)
    {
        grade = 6;
    }
    else
        grade = 5;

    printf("This is grade %d steel.\n",grade);


    return 0;
}
