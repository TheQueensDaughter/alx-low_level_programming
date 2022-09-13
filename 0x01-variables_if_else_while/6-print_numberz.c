#include <stdio.h>

/**
 *main- Prints 0-9 using putchar
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
putchar('\n');
return (0);
}
