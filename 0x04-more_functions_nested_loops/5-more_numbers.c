#include "main.h"

/**
 *more_numbers- prints numbers to 14
 *
 *Return: returns nothing
 */

void more_numbers(void)
{
int x, y;

for (x = 0; x < 10; x++)
{
for (y = 0; y <= 14; y++)
{
if (y > 9)
{
_putchar((y / 10) + '0');
}
else
{
_putchar(y);
}
}
_putchar('\n');
}
}
