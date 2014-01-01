

//  getfrmkbd(&x);
#include "header.h"


int 
main(int argc, char *argv[])
{
  	printf("sizeof(char) == %lu\n", sizeof(char));
	printf("sizeof(short) == %lu\n", sizeof(short));
	printf("sizeof(int) == %lu\n", sizeof(int));
	printf("sizeof(long long) == %lu\n", sizeof(long long));
	printf("Storage size for float : %lu \n", sizeof(float));
	printf("Storage size for double : %lu \n", sizeof(double));
	printf("Storage size for long double : %lu \n", sizeof(long double));
	printf("Minimum float positive value: %E\n", FLT_MIN );
	printf("Maximum float positive value: %E\n", FLT_MAX );
	printf("Precision value: %d\n", FLT_DIG );
	
	  
	return 0;
}
