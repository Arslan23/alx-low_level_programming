#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Print value if is negative or positive
* Description: Print in standard output if n is positive, zero or negative
* Return: Always return 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

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
		return (0);
	}
