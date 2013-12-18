/*  An Insurance company follows following rules to calculate */
/* premium. */
/* (1) If a person’s health is excellent and the person is between */
/* 25 and 35 years of age and lives in a city and is a male */
/* then the premium is Rs. 4 per thousand and his policy */
/* amount cannot exceed Rs. 2 lakhs. */
/* (2) If a person satisfies all the above conditions except that */
/* the sex is female then the premium is Rs. 3 per thousand */
/* and her policy amount cannot exceed Rs. 1 lakh. */
/* (3) If a person’s health is poor and the person is between 25 */
/* and 35 years of age and lives in a village and is a male */
/* then the premium is Rs. 6 per thousand and his policy */
/* cannot exceed Rs. 10,000. */
/* In all other cases the person is not insured. */
/* Write a program to output whether the person should be */
/* insured or not, his/her premium rate and maximum amount */
/* for which he/she can be insured. */


#include "header.h"
 
int main(int argc, char *argv[])
{
    int age,health,city,male,check,premium,pa;
	health = male = city = age = check = 0;
	
	printf ("Your age and sex type 1 for male and 0 for female: ");
	scanf("%d %d",&age,&male);

	printf ("\nWhere do you live type 1 for City or 0 for willage: ");
	scanf("%d",&city);
	
	printf ("\nPlease ener your health conditino, 0 for poor 1 for great: ");
	scanf("%d",&health);

	age = (age >= 25) && (age <= 35);
	
	if (age && health && male && city) 
		{
			premium = 4;
			pa = 200000;
			check =1;
		}
	else if (age && health && !male && city)
		{
			premium = 3;
			pa = 100000;
			check =1;
		}
	else if (age && !health && male && !city)
		{
			premium = 6;
			pa = 10000;
			check =1;
		}
	else
		printf ("Sorry there is no policy available for you\n");	

	if (check)
		{
			printf("Your premium is $%d per 1000 and policy limit is $%d\n",premium,pa);
		}
	
   
	return 0;
}

