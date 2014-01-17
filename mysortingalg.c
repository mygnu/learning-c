/* take a pointer to one D array and the length of the array */
void my_selection_sort(int a[], int N)
  {
    for (int i = 0; i < N-1; i++) // run the loop for N-1 times
      {
	int iMin = i;
	for (int j = i-1; j < N; j++)
	  {
	    if (a[j] < a[iMin])
	      {
		iMin = j;
	      }
	  }

	int placeholder = a[i];
		a[i] = a[iMin];
		a[iMin] = placeholder;
      }

  }

/* take a pointer to one D array and the length of the array */
void my_bubble_sort(int a[], int N)
  {
    for (int i = 0; i < N; i++)
      {
	int flag = 0;
	for (int j = 0; j < N; j++)
	  {
	    if (a[j] > a[j+1])
	      {
		int temp = a[j];
		a[j] = a[j+1];
		a[j+1] = temp;
		flag = 1; // every time we go through the loop flag will be 1
	      }
    	  }
	if(!flag) // if flag is 0 dont run the loop any more
	  break;
      }
  }

void my_insersion_sort(int a[], int N)
  {
    for (int i = 0; i < N-1; i++)
      {
	int value = a[i];
	int hole = i;

	while (hole > 0 && a[hole -1] > value)
	  {
	    a[hole] = a[hole -1];
	    hole = hole -1;
	  }
	a[hole] = value;
      }

  }
