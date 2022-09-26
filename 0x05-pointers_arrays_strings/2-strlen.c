#include <stdio.h>

/**
 *_strlen- prints tge length of a string
 *@s: The pointer to string to be considered
 */

int _strlen(char *s)
{
int c = 0;
while(*s != '\0')
{
s++;
c++;
}
return (c);
}
