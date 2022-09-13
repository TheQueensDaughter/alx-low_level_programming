#include <stdio.h>

/**
 *main- Prints all different two digit combinations
 *
 *Return: 0(Success)
 */

int main(void)
{
int x;
int y;
for (x = '0'; x <= '9'; x++)
{
for (y = x++; y <= '9'; y++)
{
putchar(x);
putchar(y);
if (x != '8' && y != '9')
putchar(',');
putchar(' ');
}
}
return (0);
}
