/* this is an array of prime numbers */

# include "header.h"


void zeroing_multiples(int a[], int N);


int 
main(int argc, char *argv[])
{
  int arr[100];
  

  for (int i = 0; i < 100; i++)
    {
      arr[i]=i+1;
    }
  
  zeroing_multiples(arr, 100);
  
  for (int i = 0; i < 100; i++)
    {
      if (arr[i] != 0)
	{
	  printf("%d ", arr[i] );

	}

    }

  
}
void zeroing_multiples(int a[], int N)
{
  for (int i = 2; i < N; i++)
    {
      int can = 2;
      
      for(; can < N;)
	{
	  if (a[i] % can == 0)
	    {
	      a[i] = 0;
	    }
	  if (a[i] != 0)
	    can = a[i];
	}
    }

}


