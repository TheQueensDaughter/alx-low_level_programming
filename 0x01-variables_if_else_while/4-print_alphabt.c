#include <stdio.h>

/**
 *main- Prints all alphabets except q and e
 *
 *Return: 0(Success)
 */

int main(void)
{
int x;
for (x = 'a'; x <= 'z'; x++)
{
if (x != 'e' &&  x != 'q'
putchar (x)
}
putchar('\n');
return (0);
}
