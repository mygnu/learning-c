#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
  char card_name[3];
  puts("Enter the cord_name: ");
  scanf("%2s", card_name);
  int val = 0;
	
  if ((card_name[0] == 'K') ||
      (card_name[0] == 'Q') ||
      (card_name[0] == 'J'))
    {
      val = 10;
    } else if (card_name[0] == 'A')
    {
      val = 11;
    }
  else
    {
      val=atoi(card_name);
    }
	
  if ((val >= 3) && (val <= 6))
    {
      puts("Count has gone UP!");
    } else if ((val >= 10))
    {
      puts("Count has gone DOWN!");
    }
	

  return 0;
}
