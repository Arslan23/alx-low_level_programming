#include "main.h"
/**
 * puts2 - prints one char out of 2
 * @str: type
 * Return: void
 */
void puts2(char *str)
{
	int len = 0;
	int l = 0;
	char *y = str;
	int a;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	l = len - 1;
	for (a = 0 ; a <= l ; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}


