/*  A positive integer is entered through the keyboard, write a */
/* function to find the binary equivalent of this number using */
/* recursion. */


//  getfrmkbd(&x);

#include "header.h"

void inttobin(int n);
double nthbinval(int n);


int 
main(int argc, char *argv[])
{
  int a;
  getfrmkbd(&a);
  //printf("%d %d %d \n",a++,a++,++a);
  //double x =2;
  
  printf("%.0f\n", nthbinval(a));
  
  printf("bin of %d =", a);
  inttobin(a);
  

  return 0;
  
}
double nthbinval(int n)
     {
       if (n == 1)
	 return 1;
       else
	 return power(2,n-1);
     }


void inttobin(int n)
{
  int start =0;
  for(int i=32; i > 0 ; i--)
    {
      if ((n < nthbinval(i+1)) && (n >= nthbinval(i)))
	{
	  start = 1;
	  printf("1");
	  n= n-nthbinval(i);
	}
      else if (start)
	printf("0");
      if((i-1)%4 == 0) 
	printf(" ");
      
    }
  printf("\n");
  

}
