
//  getfrmkbd(&x);

#include "header.h"

int *fun()
  {
    int k = 35;
    return (&k);
  }

int 
main(int argc, char *argv[])
{
  int *j;
  j = fun();
  printf("%i\n",*j);
  
  

  return 0;
}
