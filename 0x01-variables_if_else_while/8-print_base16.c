#include <stdio.h>

/**
 *main- print the numbers of base 16
 *
 *Return: 0(Success)
 */

int main(void)
{
int x;
for (x = '0'; x <= '9'; x++)
{
putchar(x);
}
for (x = 'a'; x <= 'f'; x++)
{
putchar(x);
}
putchar('\n');
return (0);
}
