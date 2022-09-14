#include "main.h"

/**
 *_islower - checks if a given char is lowercase or not
 *
 *Return: 1(Success) 0(Not)
 */

int _islower(int c)
{
if (c > 'Z')
return (1);
else
return (0);
}
