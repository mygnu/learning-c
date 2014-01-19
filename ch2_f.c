/* If the ages of Ram, Shyam and Ajay are input through the */
/* keyboard, write a program to determine the youngest of the */
/* three. */


#include <stdio.h>

int main(int argc, char *argv[])
{
    int Ram,Shyam,Ajay;

    printf("Please enter the age of Ram, Shyam and Ajay: ");

    scanf("%d%d%d", &Ram,&Shyam,&Ajay);

/* determine who is youngest */

    if(Ram < Shyam && Ram < Ajay)
    {
        printf("Ram is the youngest.\n");
    }
    else if(Shyam < Ram && Shyam < Ajay)
    {
        printf("Shyam is the youngest.\n");
    }
    else if (Ajay < Ram && Ajay < Shyam)
    {
        printf ("Ajay is the youngest.\n");
    }



    return 0;
}
