/* Two numbers are entered through the keyboard. Write a */
/* program to find the value of one number raised to the power */
/* of another. */

#include <stdio.h>

int main()
{
    double res;
    int n,p;
    printf("Please enter two numbers as base and power: ");
    scanf("%d %d",&n,&p);
    res = 1;

    for(int i=1;i<=p;i++)
    {
        res=res*p;
    }

    printf("%.0f\n",res);
    return 0;
}
