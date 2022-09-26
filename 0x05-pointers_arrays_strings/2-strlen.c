#include <stdio.h>

/**
 *_strlen- prints tge length of a string
 *@s: The pointer to string to be considered
 */

int _strlen(char *s)
{
char arr[] = *s;
return (sizeof(arr)/sizeof(arr[0]));
}
