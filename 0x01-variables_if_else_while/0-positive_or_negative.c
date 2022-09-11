#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -enter a number and show if its positive or negative
 * it executes, and prints it
 * Return : always 0 (success)
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive\n", n);
else if (n < 0)
printf("%d is negative\n", n);
else if (n == 0)
printf("%d is null \n", n);
return (0);
}
