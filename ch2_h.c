/* Find the absolute value of a number entered through the */
/* keyboard. */




#include <stdio.h>

int main(int argc, char *argv[])
{
    int num;

    printf("Please a number: ");

    scanf("%d", &num);

    if (num < 0)		/* convert to positive if negative value
				 is given*/
    {
        num = -num;
    }
    printf ("The Absolute value of is %d\n", num);

    return 0;
}
