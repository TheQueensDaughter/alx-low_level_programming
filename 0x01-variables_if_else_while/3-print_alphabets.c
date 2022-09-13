#include <stdio.h>

/**
 *main- prints the alphabets in lowercase, then uppercase followed by a new line
 *
 *Return: 0(Success)
 */

int main(void)
{
int x;
for (x = 'a'; x <= 'z'; x+++)
{
putchar(x);
}
for (x = 'A'; x <= 'Z'; x++)
{
putchar(x);
}
putchar('\n');
return (0);
}
