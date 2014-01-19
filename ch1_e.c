/* The length & breadth of a rectangle and radius of a circle are */
/* input through the keyboard. Write a program to calculate the */
/* area & perimeter of the rectangle, and the area & */
/* circumference of the circle. */
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
#include <stdio.h>

int main(int argc, char *argv[])
{
    float length, width, radius, area, areac, circumference;

    printf ("Please entre lenth, width of a rectongle and radius of o circle:\n");

    scanf("%f %f %f", &length, &width, &radius); /* reads the values to variables */

    area = length * width;

    areac = M_PI * (radius * radius); /* apply the formula */

    circumference = M_PI * radius * 2;

    printf("Rectangle area %.2f, circle area %.2f circumference %.2f\n", area, areac, circumference);

    return 0;
}
