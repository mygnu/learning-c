


#include "header.h" //gets most common header files from my own header
 
int main(int argc, char *argv[])
{
	
	int n, i = 3, count, c;   
	printf("Enter the number of prime numbers required\n"); 
	scanf("%d",&n);   
	if ( n >= 1 ) 
		{ 
			printf("First %d prime numbers are :\n",n); // start
			printf("2\n"); 
		}
	
	for ( count = 2 ; count <= n ; ) 
		{ 
			for ( c = 2 ; c <= i - 1 ; c++ ) 
				{ 
					if ( i%c == 0 ) 
						break; 
				} 
			if ( c == i ) 
				{ 
					printf("%d\n",i); 
					count++; 
				} 
			i++; 
		}
	
	return 0;
}

