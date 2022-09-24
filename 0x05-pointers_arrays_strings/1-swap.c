#include <stdio.h>

/**
 *swap_int- swaps the values of two intergers using
 *pointers
 *@a- the first argument of the function
 *@b- the second argument of the function
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
