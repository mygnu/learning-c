#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	char card_name[10];

	while (card_name[0] != '0')
		{
			puts("Enter the card_name: ");
			scanf("%10s", card_name);
			printf ("Current card_name: %s \n", card_name);
		}
	
	return 0;
}
