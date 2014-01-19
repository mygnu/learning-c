/* Write a program to check whether a triangle is valid or not, */
/* when the three angles of the triangle are entered through the */
/* keyboard. A triangle is valid if the sum of all the three angles */
/* is equal to 180 degrees. */



#include <stdio.h>

int main(int argc, char *argv[])
{
    int a,b,c;

    printf("Please three angles of a triangle: ");

    scanf("%d%d%d", &a,&b,&c);

    if ((a+b+c)==180)		/* fair enough logic */
    {
        printf ("The Triangle is Valid\n");
    }
    else
    {
        printf ("The Triangle is InValid\n");
    }
    return 0;
}
