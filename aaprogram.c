 
//  getfrmkbd(&x);
#include "header.h"
#include <curl/curl.h>
int 
main(int argc, char *argv[])
{
  int a[2][4] =    // a[i] yields the addres of the ith one dimentional array of four integers
    {
      {10, 15, 13, 13},
      {98, 67, 80, 76}
    };
  
  printf(" two dimentional array, or two arrays of four elements each\n\
int a[2][4] =\n\
    {\n\
      {10, 15, 13, 13},\n\
      {98, 67, 80, 76}\n\
    };\n");
  int (*ptr)[4] = a;
  
  printf("(a) is a pointer to one dimentional array of four integers\n");
  printf("a = %p is an pointer to one D array of four itegers\
\nit is defined as int (*ptr)[4];\n",a);
  
  printf("printing (ptr) gives us %d\n", ptr);
  printf("printing (ptr+1) gives us %d\n", ptr+1);
  
  printf("(*ptr) is %d, wich is pointer to the begenning of first one D array\
 \n", *ptr);
  printf("printing (*ptr+1) gives us %d\n", *ptr+1);
  printf("printing *(a[0]+1) gives us %d\n", *(a[0]+1));
  printf("printing *(*(a+0)+1) gives us %d\n", *(*(a+0)+1));

 
  return 0;
}


































































