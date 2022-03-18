#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * positive_or_negative - Entry point
 * @n: check if number is positive or negative
 * Return: Always 0 (Success)
 */

void positive_or_negative(int n)
{
if (n > 0)
{
printf("%d is positive\n", n);
}
if (n == 0)
{
printf("%d is zero\n", n);
}
if (n < 0)
{
printf("%d is negative\n", n);
}
}
