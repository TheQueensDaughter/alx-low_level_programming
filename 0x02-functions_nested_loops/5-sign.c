#include "main.h"

/**
 *print_sign- function that prints the sign of a number
 *@n: the variable to be accessed as argument
 *Return: 1(Positive) -1(Negative) 0(0)
 */

int print_sign(int n)
{
if (n > 0)
return (1);
else if (n == 0)
return (0);
else
return (-1);
}
