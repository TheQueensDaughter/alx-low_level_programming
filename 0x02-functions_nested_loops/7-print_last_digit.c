#include "main.h"

/**
 *print_last_digit- Prints last digit of a number
 *@c: variable to be accessed as argument
 *Return: value of last digit
 */

int print_last_digit(int c)
{
int i = c % 10;
if (i < 0)
{
i *= -1;
}
_putchar(i + '0');
return (i);
}
