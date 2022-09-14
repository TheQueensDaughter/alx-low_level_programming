#include "main.h"

/**
 *main- Function that prints lowercase alphabets 
 *but not with the standard library
 *Return: 0(Success)
 */

void print_alphabet(void);{
int x;
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
}
