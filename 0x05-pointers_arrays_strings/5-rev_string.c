#include <stdio.h>
#include "main.h"
/**
 *rev_string- Reverses a string
 *@s: Pointer to string to be reversed
 */

void rev_string(char *s)
{
  int i, n;
  char *pntr, temp[n];
  pntr = s;
  while (*pntr != '\0')
    {
      pntr++;
      n++;
    }
  for (i = 0; i < n; i++)
    {
      temp [i] = *(s + n - 1 -i);
    }
  i = 0;
  for (i = 0; i < n; i++)
    {
      *(s + i) = temp[i];
}
    }
