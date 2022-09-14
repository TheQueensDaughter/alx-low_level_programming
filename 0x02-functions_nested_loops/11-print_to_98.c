#include <stdio.h>

/**
 *print_to_98- prints all natural numbers from n to 98
 *followed by a comma and a space
 *@n: the variable argument
 */

void print_to_98(int n)
{
if (n <= 98)
{
while (n < 98)
{
printf("%i, ", n);
n++;
}
printf("%i\n", n);
}
if (n > 98)
{
while (n > 98)
{
printf("%i, ", n);
n--;
}
printf("%i\n", n);
}
