#include "main.h"

/**
 *_isalpha- function that determines if a char is
 *an alphabet or not
 *@c: the variable to be accessed as argument
 *Return: 1(Success) 0(Not)
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
