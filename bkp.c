/* Implement the Selection Sort, Bubble Sort and Insertion sort */
/* algorithms on a set of 25 numbers. */
# include "header.h"


void display(int a[], int arrayl);


int 
main(int argc, char *argv[])
{
  int num[20] = {-23, 13, 8, 8, 8, 2, 9, 54,
		 78, -6, 0, 43, 87, 59, 89,
		 42, 34, -24, 78, 3};
 

  printf("Unsorted Array of 20 integers\n");

  display(num, 20);

  //my_selection_sort(num, 20);
 
  printf("\n\n\n");
  printf("Sorted Array of 20 integers\n");

  display(num, 20);
  printf("\n\n\n");
  
  return 0;
}

void display(int a[], int arrayl)
  {
    for(int i = 0; i < arrayl; i++)
    {
      printf("%d ",a[i]);
    }
  }



