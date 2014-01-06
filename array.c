 
//  getfrmkbd(&x);
#include "header.h"

int 
main(int argc, char *argv[])
{
  int a[4] = { 10, 15, 13, 13};
  int *p, *o;
  p=a;
  o=p;
  
  for (int i = 0; i < 4; i++)
    {
      printf("%d th array adderss= %p, value = %d\n",i, &a[i], a[i]);
      printf("%d th array adderss= %p, value = %d\n",i, (p+i), *(p+i));
      printf("%d th array adderss= %p, value = %d\n\n",i, (o), *(o));
      o++;
    }


  return 0;
}


































































