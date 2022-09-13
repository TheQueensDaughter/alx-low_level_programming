#include <stdlib.h>

#include <time.h>

/* more headers goes there */



/**
 *main - generates random numbers and prints its sign
 *
 *Return = 0(Success)
 */

int main(void)
  
{
  
int n;
  

  
srand(time(0));
  
n = rand() - RAND_MAX / 2;
  
/* this code prints if the random number is positive. negative, or 0 */

  
if (n>0) {
    
printf("is positive\n");
      
} else if (n==0) {
    
printf("is zero\n");
      
} else {

printf("is negative\n");
      
}                           
return (0);
  
}
