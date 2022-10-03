#include <stdio.h>
#include "main.h"
/**
 *rev_string- Reverses a string
 *@s: Pointer to string to be reversed
 */

void rev_string(char *s)
{
int i, n;
char temp, *pntr;
pntr = s;
while (*pntr != '\0')
{
pntr++;
n++;
}
for (i = 0; i < (n / 2); i++)
{
temp = *(s + n - 1 -i);
*(s + n - 1 - i) = *(s + i);
*(s + i) = temp;
}
}
