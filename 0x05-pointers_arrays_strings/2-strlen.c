#include <stdio.h>

/**
 *_strlen- prints the length of a string
 *@s: The pointer to string to be considered
 *Return: the length of the string
 */

int _strlen(char *s)
{
int c = 0;
while (*s != '\0')
{
s++;
c++;
}
return (c);
}
