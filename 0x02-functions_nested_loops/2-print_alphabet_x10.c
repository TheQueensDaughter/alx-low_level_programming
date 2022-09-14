#include "main.h"

/**
 *print_alphabet_x10- prints the lowercase alphabets
 *followed by a new line, ten times
 *Return: void
 */

void print_alphabet_x10(void)
{
int x = 1;
int y;
while (x <= 10)
{
for(y = 'a'; y <= 'z'; y++)
{
_putchar(y);
}
_putchar('\n');
x++;
}
}
