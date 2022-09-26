#include <stdio.h>
#include "main.h"
/**
 *rev_string- Reverses a string
 *@s: Pointer to string to be reversed
 */

void rev_string(char *s)
{
  int i, n = _strlen(*s);
  for (i = 0, i < n, i++)
    {
      swap(*(s + i), *(s + (n - i - 1)));
    }
    }
