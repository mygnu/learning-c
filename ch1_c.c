/*A program to calculate gross salary
 input basic salary via keyboard*/
#include <stdio.h>

int main(int argc, char *argv[])
{
	float math, sci, pun, eng, sst, total, avg;

	math = sci = pun = eng = sst = total = avg= 0;

	puts("please enter marks for math sci pun eng and sst:");

	scanf("%f %f %f %f %f", &math, &sci, &pun, &eng, &sst);

	total = math + sci + pun + eng + sst;

	avg = total * 100 / 500;

	printf ("total is %f and percentage is %f\n",total, avg);

	
	return 0;
}



