#include <stdlib.h>

#include <time.h>

#include <stdio.h>



/**
 *main -prints the last digit of randomly generated number
 *Description: This numbers last digit is described further
 *Return: 0(Success)
*/

int main(void)

{
int n;



srand(time(0));

n = rand() - RAND_MAX / 2;
int l;
l = n % 10;

if (l > 5)
printf("Last digit of %i is %i and is greater than 5", n, l);
else if (l == 0)
{
printf("Last digit of %i is 0 and is 0", n);
}
else
{
printf("Last digit of %i is %i and is less than 6 and not 0", n, l);
}
return (0);

}