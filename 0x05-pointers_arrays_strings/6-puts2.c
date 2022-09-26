#include "main.h"

/**
 *puts2- prints every other character of a string starting with the first one
 *@str: The pointer to the string in consideration
 */

void puts2(char *str)
{
int i = 2;
while (*str != '\0')
{
if (i % 2 == 0)
{
_putchar(*str);
}
i++;
str++;
}
_putchar('\n');
}
