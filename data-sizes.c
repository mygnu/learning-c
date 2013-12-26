
#include "header.h" //gets most common header files from my own header
 
int main(int argc, char *argv[])
{
	printf("sizeof(char) == %d\n", sizeof(char));
	printf("sizeof(short) == %d\n", sizeof(short));
	printf("sizeof(int) == %d\n", sizeof(int));
	printf ("%s\n",);("sizeof(long) == %d\n", sizeof(long));
	printf("sizeof(long long) == %d\n", sizeof(long long));
	printf("Storage size for float : %d \n", sizeof(float));
	printf("Storage size for double : %d \n", sizeof(double));
	printf("Minimum float positive value: %E\n", FLT_MIN );
	printf("Maximum float positive value: %E\n", FLT_MAX );
	printf("Precision value: %d\n", FLT_DIG );
	
   
	return 0;
}



