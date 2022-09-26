#include <string.h>
#include "main.h"

/**
 *puts_half- Prints the second half of a string
 *If the strings length is odd,function prints the 
 *last n characters of the string
 * where n = (length_of_the_string - 1) / 2
 *@str: The pointer to the string
 *n: variable that helps me get length of string
 *pntr: An identical pointer in order not to move 
 *my original pointer when counting
 */

void puts_half(char *str)
{
int i, n;
char *pntr;
i = 0;
n = 0;
pntr = str;
while (*pntr != '\0')/*gets length of string*/
{
n++;
pntr++;
}
if (n % 2 == 0)/*gets half length*/
{
n = n / 2;
}
else
{
n = (n - 1) / 2;
}
while (*str != '\0')/*prints second half of string*/
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
