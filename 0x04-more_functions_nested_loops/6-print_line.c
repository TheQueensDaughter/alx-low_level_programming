#include "main.h"

/**
 *print_line - prints a straight line using '_'
 *@n: parameter/ number of characters to print
 *Return:returns nothing
 */

void print_line(int n)
{
int i;
if (n > 0)
{
for (i = 0; i <= n; i++)
{
_putchar('_');
}
}
_putchar('\n');
}
