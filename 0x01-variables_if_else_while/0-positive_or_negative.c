#include <stdlib.h>

#include <time.h>

#include <stdio.h>



/**
 *main - generates random numbers and prints its sign
 *
 *Return: 0(Success)
 */

int main(void)

{

int n;



srand(time(0));

n = rand() - RAND_MAX / 2;

/* this code prints if the random number is positive. negative, or 0 */


if (n > 0) {

printf("%i is positive\n", n);

}

else if (n == 0)

{

printf("%i is zero\n", n);

}

else {

printf("%i is negative\n", n);

}                           
return (0);

}
