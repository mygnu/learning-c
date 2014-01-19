/* Given the length and breadth of a rectangle, write a program to */
/* find whether the area of the rectangle is greater than its */
/* perimeter. For example, the area of the rectangle with length = 5 */
/* and breadth = 4 is greater than its perimeter. */



#include <stdio.h>

int main(int argc, char *argv[])
{
    int len,wid,area,per;

    printf("Please the legth and width of a rectangle: ");

    scanf("%d %d", &len,&wid);

    area = len * wid;		/* simple enough logic */
    per = len * 2 + wid * 2;

    if (area > per)
    {
        printf ("The area %d of the rectangle is greater\
 than the prerimeter %d \n",area, per);
    }
    else
        printf ("The area %d of the rectangle is smaller\
 than the prerimeter %d \n",area, per);


    return 0;
}
