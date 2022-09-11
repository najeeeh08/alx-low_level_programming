#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Enter a number and show if its positive or negative
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
else if (n == 0)
printf("%d is zero \n", n);
printf("%d is positive\n", n);
else if (n < 0)
printf("%d is negative\n", n);
return (0);
}
