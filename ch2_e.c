/* A five-digit number is entered through the keyboard. Write a */
/* program to obtain the reversed number and to determine */
/* whether the original and reversed numbers are equal or not. */


#include <stdio.h>

int main(int argc, char *argv[])
{
    int num,var,rnum,d1,d2,d3,d4,d5;


    printf ("Please enter a five digit number: ");
    scanf("%i", &num);

    d5 = num % 10;
    var = num / 10;

    d4 = var % 10;
    var = var / 10;

    d3 = var % 10;
    var = var / 10;

    d2 = var % 10;
    var = var / 10;

    d1 = var % 10;

    rnum= (d5 * 10000) + (d4 * 1000) + (d3 * 100) + (d2 * 10) + d1;

    printf ("num = %d, rnum = %d\n",num,rnum);
    if (num == rnum)
    {
        printf("both Number and its reverse are equal\n");
    }
    else{
        printf("both Number and its reverse are not equal\n");

    }




    return 0;
}
