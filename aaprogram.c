 
//  getfrmkbd(&x);
#include "header.h"
#include <curl/curl.h>

void display(int (*p)[2], int row, int column );
void doublearr(int (*p)[2], int row, int column );

int 
main(int argc, char *argv[])
{
  int s[4][2] = {
    { 1234, 56 },
    { 1212, 33 },
    { 1434, 80 },
    { 1312, 78 }
  } ;
  // int ( *p )[2] = s ;
  
  display(s,4,2);
  doublearr(s,4,2);
  display(s,4,2);
  /* for ( i = 0 ; i <= 3 ; i++ ) */
  /*   { */
  /*     p = &s[i] ; */
  /*     // pint = p; */
  /*     for ( j = 0 ; j <= 1 ; j++ ) */
  /* 	printf ( "%d ", *( *p + j ) ) ; */
  /*     printf ( "\n" ) ; */
      
  /*   } */
      
  return 0;
    
}

void display(int (*p)[2], int row, int column )
  {
    for (int i = 0; i < row; i++)
      {
	for (int j = 0; j < column; j++)
	  {
	    printf("%d ",p[i][j]);
	  }
	printf("\n");
	

      }

  }

void doublearr(int (*p)[2], int row, int column )
  {
    for (int i = 0; i < row; i++)
      {
	for (int j = 0; j < column; j++)
	  {
	    p[i][j] = p[i][j] * 2;
	  }
      }

  }
