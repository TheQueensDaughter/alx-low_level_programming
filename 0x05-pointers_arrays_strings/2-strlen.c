#include <stdio.h>

/**
 *_strlen- prints tge length of a string
 *@s: The pointer to string to be considered
 */

int _strlen(char *s)
{
return (sizeof(*s)/sizeof(*s[0]));
}
