/*A program to calculate gross salary
 input basic salary via keyboard*/
#include <stdio.h>

int main(int argc, char *argv[])
{
	float km_distance, cm_distance, mt_distance, ft_distance, in_distance;

	puts("Please enter distance in KM: ");
	scanf("%f", &km_distance);

	mt_distance = km_distance * 1000;
	cm_distance = mt_distance * 100;
	ft_distance = km_distance * 3280.8;
	in_distance = ft_distance * 12;

	printf ("distance in %.0f km is equal to %.2f Meters, %.2f CM, %.2f Feet and %.2f Inches\n", km_distance, mt_distance, cm_distance, ft_distance, in_distance);

	return 0;
}


