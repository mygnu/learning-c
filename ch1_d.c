/* Temperature of a city in Fahrenheit degrees is input through */
/* the keyboard. Write a program to convert this temperature */
/* into Centigrade degrees. */

#include <stdio.h>

int main(int argc, char *argv[])
{
	float dc, df;
	dc = df = 0;
	printf("enter a digree fahrenheit tem unit: ");
	scanf("%f",&df);

	dc = (df - 32) * 5.0/9;

	printf("%.2f Fahrenheit is %0.2f celcious \n", df,dc);
	return 0;
}



