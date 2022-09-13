#include "main.h"

/**
 * reverse_array - reverse the contents of an array of integers
 * @a: array of integers
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int tmp;
	int i, len, s;

	len = 0;
	s = 0;

	while a[len] != '\0')
	{
		len++;
	}

	s = len - 1;

	if (len == n)
	{
		for (i = 0; i < len; i++)
		{
			tmp = a[i];
			a[i] = a[s];
			a[s--] = tmp;
		}
	}
}
