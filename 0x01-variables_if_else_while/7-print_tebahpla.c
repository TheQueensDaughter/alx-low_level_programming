#include <stdio.h>

/**
 *main- Prints lowercase alphabets backwards
 *
 *Return: 0(Success)
 */

int main(void)
{
int x;
for (x = 'z'; x >= 'a'; x--)
{
putchar(x);
}
putchar('\n');
return (0);
}
