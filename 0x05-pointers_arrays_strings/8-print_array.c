#include <stdio.h>

/**
 *print_array- Prints n elements of an array in order
 *@a: Pointer to the first element of the array
 *@n: Number of elements to be printed
 */

void print_array(int *a, int n)
{
int i = 0;
while (i < n)
{
if (i < (n - 1))
{
printf("%i, ", *(a + i));
}
else
{
printf("%i", *(a + i));
}
i++;
}
putchar('\n');
}
