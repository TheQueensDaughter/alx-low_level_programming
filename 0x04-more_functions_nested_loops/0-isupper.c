#include "main.h"

/**
 *_isupper - checks if a  character is uppercase or not
 *@c: argument/character to be accessed
 *Return: 1(Success)  0(Not)
 */

int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
{
return (1);
}

return (0);
}
