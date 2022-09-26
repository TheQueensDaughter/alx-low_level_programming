#include <string.h>
#include "main.h"

/**
 *puts_half- Prints the second half of a string
 *If the strings length is odd,function prints the last n characters of the string
 * where n = (length_of_the_string - 1) / 2
 */

void puts_half(char *str)
{
  int i, n;
  char *pntr;
  i = 0;
  n = 0;
  pntr = str;
  while (*pntr != '\0')
    {
      n++;
      pntr++;
    }
  n = n/2;
    while (*str != '\0')
      {
	if (i >= n)
	  {
	    _putchar(*str);
	  }
	str++;
	i++;
      }
    _putchar('\n');
}
