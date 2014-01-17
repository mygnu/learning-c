/*  Twenty-five numbers are entered from the keyboard into an */
/* array. The number to be searched is entered through the */
/* keyboard by the user. Write a program to find if the number to */
/* be searched is present in the array and if it is present, display */
/* the number of times it appears in the array. */

# include "header.h"

void searched(int a[], int length, int num);


int 
main(int argc, char *argv[])
{
  int srch, num[25];
  for (int i = 0; i < 25; i++)
    {
      getfrmkbd(&num[i]);
    }
  printf("Enter a number to searh");
  getfrmkbd(&srch);
  searched(num, 25, srch );

  return 0;
}

void searched(int a[], int length, int num)
  {
    int i =0;
    while (i < length)
      {
	if (a[i]== num)
	  {
	    printf("The number %d is in the array.\n", num);
	    break;
	  }	
	i++;
      }
  }
