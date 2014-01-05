
//  getfrmkbd(&x);
#include "header.h"
#define HLINE for(int i= 0; i < 79; i++)\
    printf("%c", 196);
#define VLINE(X, Y){\
    gotoxy(X, X);\
    printf("%c",179);}

int 
main(int argc, char *argv[])
{
  int i, y;
  gotoxy(1,12);
  HLINE;

  for (y=1; y< 25; y++)
    {
      VLINE(39,y);
    }

  return 0;
}

