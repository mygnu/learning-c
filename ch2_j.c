/* Given three points (x1, y1), (x2, y2) and (x3, y3), write a */
/* program to check if all the three points fall on one straight line. */



#include <stdio.h>

int main(int argc, char *argv[])
{
    float x1,x2,x3,y1,y2,y3;

    printf("\nEnter the three coordinates (x1,y1),(x2,y2),(x3,y3)");

    scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3);

    if ((y2-y1)/(x2-x1)==(y3-y2)/(x3-x2)) /* I really don't understand
					     this logic anyway */
        printf("\nThe three points fall on the same line\n");
    else
        printf("\nThe three points are not collinear \n");

    return 0;
}
