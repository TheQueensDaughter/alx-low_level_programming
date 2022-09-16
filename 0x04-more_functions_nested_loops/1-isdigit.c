#include "main.h"

/**
 *_isdigit - checks whether a  character is a digit
 *or nor
 *@c: argument/character that is being accesssed
 *Return: 1(Success) 0(Not)
 */

int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
{
return (1);
}

return (0);
}
