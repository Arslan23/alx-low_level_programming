#include "main.h"

/**
 * _print_rev_recursion - function that prints a string, to reverse.
 * @s: string to print reverse
 * Return:  void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);

	}
}
