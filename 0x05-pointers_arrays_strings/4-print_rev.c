#include "main.h"

/**
 *print_rev- Prints a string in reverse
 *@s: The pointer to the string to be printed
 */

void print_rev(char *s)
{
int i = 0;
while (*s != '\0')
{
i++;
s++;
}
while (i != 0)
{
putchar(*s);
s--;
i--;
}
}
