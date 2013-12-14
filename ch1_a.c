/*A program to calculate gross salary
 input basic salary via keyboard*/
#include <stdio.h>

int main(int argc, char *argv[])
{
	float basic_salary;
	float d_allowance, hr_allowance, gross_salary;
	puts("Please entre Basic Salary: ");
	scanf("%f", &basic_salary);

	d_allowance = basic_salary * 0.4;
	hr_allowance = basic_salary * 0.2;

	gross_salary = basic_salary + d_allowance + hr_allowance;
	
	
	printf ("\nyour Salary is  = %.2f\t ",basic_salary);
	printf ("Gross Salary is  = %.2f\n",gross_salary);
	return 0;
}


