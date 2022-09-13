#include <stdio.h>

/**
 *main- Prints all combinations of single numbers
 *
 *Return: 0(Success)
 */

int main(void)
{
int x;
for (x = '0'; x <= '9'; x++)
{
putchar("%i", x);
if (x != '9')
putchar(',');
putchar(' ');
}
return (0);
}
