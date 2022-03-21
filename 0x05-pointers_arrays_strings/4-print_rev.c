#include "main.h"

/**
 * print_rev - Print a string in reverse
 * @s: param
 * Return: return void
 */


void print_rev(char *s)
{
int length = 0;
int i = 0;
do {
length++;
} while (s[length] !=  '\0');

for (i = length - 1; i >= 0; i--)
{
_putchar(s[i]);
}

_putchar('\n');


}










